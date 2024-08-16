#include <linux/unistd.h>
#include <errno.h>

extern int errno;

_syscall2(int, getticket, int, arg1, int*, arg2);