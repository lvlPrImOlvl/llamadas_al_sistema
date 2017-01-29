/*Práctica #14 - Numeros aleatorios y llamadas al sistema
*Torres Ortiz Luis Miguel
*gcc -Wall -g aleatorios.c -o aleatorios
*/
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
void main ()//funcion principal
{
   int cadenaLeida;
   int fichero = open ("/dev/random", O_RDONLY);//Se abre el arcchivo random para abrir un numero aleatorio
   if (fichero==-1)//si devuelve -1  es que hubo un error
   {
        perror("Error al abrir fichero:");//perror es una llamada  al sistema para el manejo de errores
        exit(1);//manda un 1 para salir
   }
   read(fichero, &cadenaLeida, sizeof(int));//funcion read es una llamada al sistema y el tercer parametro saca el tamanio del segundo parametro
   close(fichero);//cierra el archivo con la llamada al sistema close
   printf ( "Total leido %d\n",&cadenaLeida);//Imprimo la cadena que lee con la llamada al sistema read
}
