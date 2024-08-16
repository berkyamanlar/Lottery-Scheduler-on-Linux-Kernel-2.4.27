#include <asm/uaccess.h>
#include <linux/sched.h>
#include <linux/getticket.h>


asmlinkage int sys_getticket (int pid, int* ticket){
	/*int a;
	copy_from_user(&a, ticket, sizeof(int));
	
	struct task_struct *p = find_process_by_pid(pid);
	a = p->ticket;
	
	copy_to_user(&a, ticket, sizeof(int));*/
	
	return 0;
}