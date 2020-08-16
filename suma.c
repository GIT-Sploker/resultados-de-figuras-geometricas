#include <stdio.h>

int main(){

	/*Desde int num1 hasta int resultado; se crean las variables. En este caso al llevar int se crean variables de tipo numerico entero*/
	int num1;
	int num2;
	int resultado; /*Tambien se puede poner como int num1,num2,resultado;*/
	int a = 12
	int b = 3
	printf("Ingresa el PRIMER valor:\n");
	scanf("%d",&num1);
    /*Scanf se usa para que el usuario introduzaca un valor y se almacene, con %d se dice que es un valor entero-decimal*/
	/*En esta frase se usa & para que se guarde la informacion del printf dentro de la variable num1*/
	printf("Ingresa el SEGUNDO valor:\n");
	scanf("%d", &num2);
	resultado = a * (num1 + num2) + b * (b + num2); /*Aqui se le atribulle a resultado el valor de num1 + num2*/
	/*Los operadores arimeticos son:
     + para suma
     - para resta
     * para multiplicacion
     / para division
	*/
	/*Las reglas de preferencia son las mismas que en matematicas*/
	printf("El resultado de la suma es:%d\n",resultado);
	printf("Gracias por colaborar\n");
	return 0; /*Esto sirve para decirle al compilador que se acabo la funcion*/
}

