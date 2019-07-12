#include <linux/kernel.h>
#include <linux/syscalls.h>

asmlinkage long sys_expirefile(void) {
    printk("Hello expirefile!\n");

    return 0;
}