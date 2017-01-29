/*Práctica #4 - Programa4
*Programa que imprime números apartir del 0 hasta x, x es dado por el usuario.
*Torres Ortiz Luis Miguel
*gcc -Wall -g numeros.c -o numeros
*/
#include<stdio.h>
void main() //funcion main()
{
	int i=0;
	int numero=0;
	printf("¿Cuantos numeros deseas imprimir? ");
	scanf("%d",&numero);
	for(i=0; i<=numero; i++)
	{
	printf("--> %d\n",i); 
	}
}
