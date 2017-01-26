#include <stdio.h>
#include <math.h>

int main(){
	double numero = 0;
	double cuadrado = 0;
	printf("Ingresa un numero: \n");
	scanf("%",&numero);
	cuadrado = sqrt(numero);
	printf("La raiz de %d es: %d", numero,cuadrado);
	return 0;
}
