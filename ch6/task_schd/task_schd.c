#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/sched.h>


MODULE_LICENSE("Dual MIT/GPL");
MODULE_AUTHOR("Angad_Singh");
MODULE_DESCRIPTION("Kernel module listing all processes");
MODULE_VERSION("0.1");

static int __init list_process_init(void) {
struct task_struct *task;

printk(KERN_INFO "Process Lister Module Loading\n");
printk(KERN_INFO "PID\tState\tName\t\n");

for_each_process(task){
printk(KERN_INFO "%d\t%ld\t%s\n" , task->pid, task->state, task->comm);
}
return 0;
}
static void __exit list_process_exit(void) {
printk(KERN_INFO "Process Lister Module Unloading\n");
}
module_init(list_process_init);
module_exit(list_process_exit);

