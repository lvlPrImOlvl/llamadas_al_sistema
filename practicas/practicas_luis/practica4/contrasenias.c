/*Práctica #4 - Programa 5
*Programa que valida una contraseña 
*Torres Ortiz Luis Miguel
*gcc -Wall -g contrasenias.c -o contrasenias
*/
#include<stdio.h>
#include<string.h>
int main() //funcion principal
{
	char password[10];
	printf("Ingresa una contraseña:  ");
	scanf("%s",&password);

        if(strcmp(password,"hola123,") == 0)//Compara la cadena con una contraseña definida
		printf("Access Granted!\n");
	else
		printf("Access Denied!\n");

	return 0;
}
