#include <linux/unistd.h>
#include <linux/kernel.h>
#include <linux/prinfo.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE2(ptree, struct prinfo *, buf, int *, nr)
{
	return 0;
}