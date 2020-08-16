/*
  Toma de decisiones---if(Else)
       
       Operadores de Igualdad       Operadores de Relacion
      == x es igual a y             > x es mayor a y
      != x es diferente a y         < x es menor a y
                                    >= x es mayor o igual a y
                                    <= x es menor o igual a y  
*/

#include <stdio.h>

int main(){
int edad;
printf("Ingrese su edad:\n");
scanf("%d",&edad);/*Se usa para almacenar/leer la informacion metida por el usuario en el printf*/
if (edad >= 65) /*IF es equivalente a SI*/
{
    printf("Estas jubilado, Enorabuena\n");
}else if (edad == 64)/*else if comprueba si lo que dice dentro de los () es verdad, si no lo es pasara al l asiguiente opcion*/
{
    printf("Aun te queda un poco mas, vete a la obra");
} else/*Significa que si no funciono la anterior funcion ejecute esta*/
{
	printf("Vete a trabajar de una vez, o quieres acabar como Pablo Iglesas\n");
}
return 0; /*Termina el programa*/

}