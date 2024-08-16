#include <linux/switchscheduler.h>
#include <linux/getticket.h>
#include <linux/setticket.h>

#include <stdio.h>
#include <stdlib.h>


main(int argc, char **argv) {
    int i = 0;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <uid>\n", argv[0]);
        return 1;
    }

    int scheduler_type;

    printf("Enter 1 for Default Scheduler or 2 for Lottery Scheduler: ");
    scanf("%d", &scheduler_type);

    if (switchscheduler(scheduler_type) == 1) {
        printf("Current scheduler is the default scheduler.\n");
    } else if(switchscheduler(scheduler_type) == 0) {
		printf("Current scheduler is the lottery scheduler.\n");
	} else {
		printf("Invalid option.\n");
		return -1;
	}
}