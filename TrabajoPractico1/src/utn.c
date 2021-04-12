/*
 * utn.c
 *
 *  Created on: 12 abr. 2021
 *      Author: juli
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

float suma(int num1, int num2)
{
    float resultado;

    resultado = (float) num1 + num2;

    return resultado;
}

float resta(int num1, int num2)
{
    float resultado;

    resultado = (float) num1 - num2;

    return resultado;
}

float multiplicacion(int num1, int num2)
{
    float resultado;

    resultado = (float) num1 * num2;

    return resultado;
}

float division(int num1, int num2)
{
    float resultado;

    resultado = (float) num1 / num2;

    return resultado;
}

void mostrarResultados (float resultado)
{
    printf("El resultado es: %.2f \n", resultado);

}

int factorial(int num)
{
    int fact = 1;

    for(int i =1; i<=num; i++)
    {
        fact = fact * i;
    }
    return fact;
}




