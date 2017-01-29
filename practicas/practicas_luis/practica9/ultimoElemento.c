/*Practica #9 - Programa que imprime el último elemento que se reciba por línea de comandos
*Torres Ortiz Luis Miguel
*gcc -Wall -g ultimoElemento.c -o ultimoElemento
*/
#include <stdio.h>
int main(int argc,char *argv[])//funcion principal
{
	//Variable para determinar el ultimo elemento
	int last = 0;
	if (argc < 2)
		printf("Debes pasar por lo menos 1 elemento como argumento:\n");
	else
	{
		//Se resta uno porque el programa tambien cuenta como un elemento
		last = argc-1;
		printf("El ultimo argumento  es: %s\n", argv[last]);
	}
	return 0;
}
