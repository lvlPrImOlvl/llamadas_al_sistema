/*Práctica #4 - Programa 5
*Programa que imprime los numeros primos desde 2 hasta x,x es dado por el usuario
*Torres Ortiz Luis Miguel
*gcc -Wall -g primos.c -o primos
*/
#include<stdio.h>
/*Definicion de constantes globales*/
#define true 1
#define false 0
typedef char bool;//estructura tipo char

bool primo(int n);//prototipo función primo
int main() //funcion principal
{
	int limite;
	int i=0;
	printf("Programa que imprime numeros primos \n\n");
	printf("Introduce el limite hasta donde se generaran los numeros:  ");
	scanf("%d",&limite);
	while(i <= limite)//validacion del limite para generar numeros primos
	{
        if(primo(i))//Si la funcion primo() retorna un 1...
		printf("--> %d\n",i);//Impresion del numero primo
		i++;//Aumenta el valor de un auxiliar  i
	}
return 0;
}
/*Funcion primo*/
bool primo(int n)
{
	int j;
	if(n == 2) // el 2 es el único número par que también es primo
		return true;
	if(n%2 == 0 || n == 1) //Si el resultado del modulo es 1 o 0, es primo
		return false;
	for(j=2; j<=n/2; j++) //si el numero puede dividirse más de dos veces, ya no es primo.
	{
		if(n%j == 0)
			return false;
	}
	return true; //Son primos
}
