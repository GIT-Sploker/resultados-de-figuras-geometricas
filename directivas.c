/*
                                        Directivas del Preprocesador(Son las que contiene librerias y macros)
*/
#include <stdio.h>  /*Si pones <> busca el archivo en los encabezados de la biblioteca estandar*/
//(COMENTADO PARA QUE FUNCIONE el programa)#include "Ubicacion del archivo" /*Tambien se puede poner #include "ubicacion del archivo o configuracion" */
#define PI 3.14159 /*Asi se define una constante con #define*/ 
                   /*Una constante es un valor que no puede ser alterado/modificado durante la ejecución de un programa, únicamente puede ser leído*/
#define NCUBO(a) a*a*a /*Los MACROS son un alias que incluimos en nuestro código, al momento de compilar, sera reemplazado por lo que hayamos definido.*/

int main()
{                /*Decir int main () simplemente significa que sé que la función puede 
                            tener parámetros, pero no los estoy usando, por lo que escribo int main ().
                            Dentro de ese parentesis se pondrian los paramentros(int argc, char **argv)*/
    //int suma
    //printf("%i\n",suma ); %i significa numero entero
	int a = 3
    printf("El cubo de su valor es: %i\n",NCUBO(a));
	return 0;
}
