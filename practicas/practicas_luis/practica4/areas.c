/*Practica 4 - Programa1
*Programa que calcula las areas del triángulo,cuadrado y rectángulo
*Torres Ortiz Luis Miguel
*gcc -Wall -g areas.c -o areas
*/

#include<stdio.h>
//Prototipos de funciones
float triangulo(float,float); 
float rectangulo(float,float); 
float cuadrado(float); 

int main()//Funcion principal
{
	int opc;//Variable manejo de opciones
	float a,b;//Flotantes para llevar a cabo todas las operaciones

	// Menú de opciones
	do{//Hacer la impresion del menu hasta que ingrese a una opcion
		printf("\t\tPrograma que determina areas\n\n");
		printf("1.- Triangulo\n");
		printf("2.- Rectangulo\n");
		printf("3.- Cuadrado\n");
		printf("4.- Salir\n\n");
		printf("Elige una opcion: ");
		scanf("%d",&opc);//Se guarda la respuesta, se puede usar fgets para mayor seguridad

		switch(opc)
		{
			case 1://Caso del triangulo
				printf("Area del triangulo: \n");
				printf("Introduce la altura: ");
				scanf("%f",&a);
				printf("Introduce la base: ");
                       		scanf("%f",&b);
				printf("El area es: %.3f[u²]\n", triangulo(a,b));
				break;
			case 2://Caso del Rectangulo
				printf("Area del rectangulo: \n");
	                        printf("Introduce la altura: ");
        	                scanf("%f",&a);
                	        printf("Introduce la base: ");
                	        scanf("%f",&b);
                	        printf("El area es: %.3f[u²]\n", rectangulo(a,b)); 
				break;
			case 3://Caaso del Cuadrado
				printf("Area del cuadrado: \n");
	                        printf("Introduce el lado: ");
        	                scanf("%f",&a);
                	        printf("El area es: %.3f[u²]\n", cuadrado(a));
				break;
			case 4://Caso de salir
				exit(1);
				break;
			default://caso de default
				printf("\t\t-->Debes elegir una opción de las anteriores<--\n\n");
				break;
		}
	}
	while(opc>4);// se realiza de nuevo todo sino se elige una opción
	return 0;
}
//funcion del triangulo
float triangulo(float a, float b)
{
	return (a*b)/2; //Área del triángulo
}
//funcion del rectangulo
float rectangulo(float a, float b)
{
        return a*b; // Área del rectángulo
}
//funcion del cuadrado
float cuadrado(float a)
{
        return a*a; //Área del cuadrado
}



