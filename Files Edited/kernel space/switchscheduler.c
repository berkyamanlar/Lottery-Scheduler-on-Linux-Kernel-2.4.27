#include <linux/switchscheduler.h>

int phase2switchflag = 1;

asmlinkage int sys_switchscheduler (int flag){
	if (flag==1){  //default scheduler
		phase2switchflag = 1;
		return 1;
	}
	else if(flag==2){ //lottery scheduler
		phase2switchflag = 0;
		return 0;
	}
	else{
		printk("invalid option\n");
		return -1;
	}
}