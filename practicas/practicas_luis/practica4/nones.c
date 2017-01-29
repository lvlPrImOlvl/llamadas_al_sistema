/*Práctica #4
*Programa que imprime los numeros nones desde 1 hasta x,x es dado por el usuario
*Torres Ortiz Luis Miguel
*/
#include<stdio.h>
void main() //funcion main()
{
	int i=0;
	int limite=0;
	printf("Programa que imprime numeros nones \n\n");
	printf("Define el numero limite de la impresion:  ");
	scanf("%d",&limite);
	for(i=0; i<=limite; i++)
	{
		if(i%2 != 0)//Valida que no sea un número par
		printf("--> %d\n",i); 
	}
}
