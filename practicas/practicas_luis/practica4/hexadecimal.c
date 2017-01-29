/*Práctica #4
*Programa que convierte en hexadecimal un caracter ingresado por el usuario
*Torres Ortiz Luis Miguel
*gcc -Wall -g hexadecimal.c -o hexadecimal
*/
#include<stdio.h>
void main() //funcion main()
{
	char letra;
	printf("Introduce una letra:  ");//solicitamos una letra para su representacion en hexadecimal
	scanf("%c",&letra);
	printf("El hexadecimal de la letra  %c es --> %x\n",letra,letra);//Imprimimos el valor en el ASCII y su interpretacion como hexadecimal
}

