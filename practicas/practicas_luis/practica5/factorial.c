/*Práctica #5
*Programa que realiza el factorial de un número
*Torres Ortiz Luis Miguel
*gcc -Wall -g factorial.c -o factorial
*/
#include<stdio.h>
int factorial(int); //prototipo de la  función  factorial
int main()//funcion principal
{
	int numero=0;
  	printf("Introduce un numero: ");
 	scanf("%d",&numero);//Lee el numero
  	printf("El factorial de %d es: %d\n",numero, factorial(numero));//imprime el numero y su factorial
  	return 0;
}
/*Funcion factorial*/
int factorial(int x)
{
        if(x<2)//factorial de 0 y 1
                return 1;
        else
                return x * factorial(x-1);//se calcula el factorial y lo retorna
}

