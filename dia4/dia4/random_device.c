
#include <stdlib.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int random;
	char cadena[100];
	int lectura;
	random = open(char* random, O_RDONLY);
	
	if(random==-1){
		printf("Error");
		exit(1);
	}
	lectura = read(random, cadena, 50);
	close(random);
	cadena[100]=0;	
	printf("Se leyeron %d bytes, La cadena leida es %d ",random,cadena);
return 0;
}
