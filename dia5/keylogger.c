/* *Realizado por Luis */
#include <stdio.h>
#include  </usr/include/linux/input.h>
#include <fcntl.h>
#include  <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
int main(){ 
        int fd;
        struct input_event ev;
	fd = open("/dev/input/event0",O_RDONLY);
	if(fd == -1){
		fprintf(stderr,"Error al abrir");
	}
	while(1){
        	read(fd,&ev, sizeof(&ev));
        	close(fd);
		printf("%d",ev.code);
	}
return 0;
}

