/*Practica #13 - Código ofuscado
*Torres Ortiz Luis Miguel
*gcc -Wall -g ofuscado.c -o ofuscado
*/
/*Directivas del preprocesador para cambiar algunos parametros*/
#include<stdio.h>
#define BEGIN int main(){
#define INTEGER int
#define IF if
#define THEN {
#define ELSE }else {
#define PRINT printf
#define ENDIF }
#define END  return 0; }
/*inicio del programa*/
BEGIN
INTEGER x=10;
IF(x>=10)
THEN
	PRINT("TENGO DIEZ\n");
ELSE
	PRINT("REPROBARE\n");
ENDIF
END

