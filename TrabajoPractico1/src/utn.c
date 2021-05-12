/*
 * utn.c
 *
 *  Created on: 12 abr. 2021
 *      Author: juli
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int suma(int num1, int num2, float *resultado)
{
	int todoOk=1;

    *resultado = (float) num1 + num2;

    return todoOk;
}

int resta(int num1, int num2, float *resultado)
{
    int todoOk = 1;

    *resultado = (float) num1 - num2;

    return todoOk;
}

int multiplicacion(int num1, int num2, float *resultado)
{
    int todoOk = 1;

    *resultado = (float) num1 * num2;

    return todoOk;
}

int division(int num1, int num2, float *resultado)
{
    int todoOk = 1;
    if(num2 == 0)
    {
    	todoOk = 0;
    }else
    {

    	*resultado = (float) num1 / num2;
    }

    return todoOk;
}

void mostrarResultados (float resultado, int todoOk)
{
	if(todoOk == 0)
	{
		printf("No se pudo realizar la operacion, hay un numero invalido.\n");
	}else
	{
		printf("El resultado es: %.2f \n", resultado);
	}

}

int factorial(int num, float *resultado)
{
    int todoOk = 1;
    int fact = 1;
    if(num<0)
    {
    	todoOk = 0;
    }else
    {
    	for(int i =1; i<=num; i++)
    	{
    		fact = fact * i;
    	}
    	*resultado = fact;
    }
    return todoOk;
}




