/*Practica 3 - Fin del mundo
*Torres Ortiz Luis Miguel
*gcc -Wall -g finDelMundo.c -o finDelMundo*/
#include <stdio.h>
#include <limits.h>

void main()
{

	int dias = 0, i = 0;

	printf("Los anios bisiestos tienen 366 dias, y para saberlo basta con que el anio sea divisible entre 4\nPor lo tanto tendremos que saber cuando un anio es bisiesto y cuando no, para contabilizar los segundos.\n");
	printf("Antes de eso necesitamos saber el limite de una variable de tipo entero de 32 bits, en este caso es:  %lu\n",LONG_MAX);
	printf("Por lo tanto cuando pasemos de %lu segundos, ocurrir\240 un desborde\n",LONG_MAX);
	printf("Ahora verificaremos cuando suceder\240 esto:\n");

	printf("Calculamos en cuantos d\241s ser\240, dividiendo los segundos entre d\241as\n");
	dias = LONG_MAX / 86400;
	printf("Dias a partir del 1 de Enero de 1970: %i\n", dias);
	printf("Calculando....\n");
	//cuenta los diasc hasta que se acaben
	for (i = 1970 ; ; i++)
	{
		(i%4) ? (dias -=366) : (dias -=365);

		if (dias <= 0)
		{
			dias *=-1;//Se obtiene el valor absoluto por las restas que se pueden hacer
			i++;//Se aumenta un año
			break;
		}
	}
	printf("\nEl fin del mundo es %d con %d d\241as\n",i, dias);
	
}
