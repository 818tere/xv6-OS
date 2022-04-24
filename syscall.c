//Add this where the other system calls are defined in syscall.c
extern int sys_cps(void);
//Add this inside static int (*syscalls[])(void)
[SYS_cps]     sys_cps,
