#include <asm/uaccess.h>
#include <linux/sched.h>
#include <linux/setticket.h>


asmlinkage int sys_setticket (int pid, int new_ticket){
	/*
	struct task_struct *p = find_process_by_pid(pid);
	p->ticket = new_ticket;*/
	
	return 0;
}