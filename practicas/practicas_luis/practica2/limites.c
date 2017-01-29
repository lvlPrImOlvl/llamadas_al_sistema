/*Practica #2 - Limites de las variables
*Torres Ortiz Luis Miguel
*gcc -Wall -g limites.c -o limites
*/
#include<stdio.h> //header(preprocesador)
#include<limits.h>

int main() //funcion main()
{
printf("Caracter (maximo %u)\n",CHAR_BIT);
printf("Caracter con signo (maximo %u)\n",SCHAR_MAX); 
printf("Caracter sin signo (maximo %u)\n",UCHAR_MAX); 
printf("Entero corto con signo (maximo %u)\n",SHRT_MAX);
printf("Entero corto sin signo (maximo %u)\n",USHRT_MAX);
printf("Enteros con signo (maximo %u)\n",INT_MAX);
printf("Entero sin signo (maximo %u)\n",UINT_MAX);
printf("Entero largo con signo (maximo %lu)\n",LONG_MAX);
printf("Entero largo sin signo (maximo %lu)\n",ULONG_MAX); 
return 0;
}
