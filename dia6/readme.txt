#dia6
#####archivo hola.c

#include <linux/module.h>
/* Necesario en todos los modulos */
#include <linux/kernel.h>
/* Necesario para alertas  e info como KERN_INFO */
#include <linux/init.h>       /* Necesario para las macros init y exit */
static int __init inicio(void)
{
printk(KERN_INFO "Hello, Mundo \n");
return 0;
}
static void __exit fin(void)
{
printk(KERN_INFO "Adios, Mundo \n");
}
module_init(inicio);
module_exit(fin)
#########################
instalar apt-get install linux-headers-$(uname -r)
#El archivo Make solo con el archivo hola.c y darle make


hacer un update

####Archivo Makefile
obj-m := mod.o
all:
make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) modules
clean:
rm -rf *.o *.ko *.symvers *.mod.* *.order
####Hacer un make
###insmod hola.ko

###Para comprobar 
grep modulo_de_kernel /proc/modules
ls /sys/modules | grep modulo_de_kernel
modinfo modulo_de_kernel
modprobe -c | grep modulo_de_kernel
grep modulo_de_kernel /proc/kallsyms
lsmod
La hacer lsmod, se busca en la primera columna, el nombre del archivo
