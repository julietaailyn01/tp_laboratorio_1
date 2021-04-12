/*
 ============================================================================
 Name        : TrabajoPractico1.c
 Author      : Julieta Ailyn Mosquera
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void) {
	//declaro las variables
	int opcion;
	int num1;
	int flagNum1;
	int num2;
	int flagNum2;
	int flagOperaciones;
	float suma1;
	float resta1;
	float multiplicacion1;
	float division1;
	float factNum1;
	float factNum2;

	//inicializo las variables necesarias

	flagNum1 = 0;
	flagNum2 = 0;
	flagOperaciones = 0;


	do
	{
		if (flagNum1 == 1 && flagNum2 == 0)
		{
			printf("1. Ingresar 1er operando (A=%d)\n", num1);
			printf("2. Ingresar 2do operando (B=y)\n");
			printf("3. Calcular todas las operaciones\n");
			printf("4. Informar resultados. \n");
			printf("5. Salir.\n");
			scanf("%d", &opcion);
		}else if(flagNum2 == 1)
		{
			printf("1. Ingresar 1er operando (A=%d)\n", num1);
			printf("2. Ingresar 2do operando (B=%d)\n", num2);
			printf("3. Calcular todas las operaciones\n");
			printf("4. Informar resultados. \n");
			printf("5. Salir.\n");
			scanf("%d", &opcion);

		}else
		{
			printf("1. Ingresar 1er operando (A=x)\n");
			printf("2. Ingresar 2do operando (B=y)\n");
			printf("3. Calcular todas las operaciones\n");
			printf("4. Informar resultados. \n");
			printf("5. Salir.\n");
			scanf("%d", &opcion);
		}
		switch(opcion)
		{
		case 1:
			printf("ingrese el primer numero: \n");
			scanf("%d", &num1);
			flagNum1 = 1;
			break;
		case 2:
			if(flagNum1 == 1)
			{
				printf("Ingrese el segundo numero: \n");
				scanf("%d", &num2);
				flagNum2 = 1;
				if(num2 == 0)
				{
					printf("No se puede dividir por 0, intente ingresar otro numero\n");
					scanf("%d", &num2);
				}

			}else
			{
				printf("usted necesita inicializar el primer numero antes de inicializar el segundo. \n");

			}
			break;
		case 3:
			if (flagNum2 == 1)
			{
				flagOperaciones = 1;
				suma1 = suma(num1, num2);
				resta1 = resta(num1, num2);
				multiplicacion1 = multiplicacion(num1, num2);
				division1 = division(num1, num2);
				factNum1 = factorial(num1);
				factNum2 = factorial(num2);
				printf("Se hicieron todas las operaciones con exito.");

			}else
			{
				printf("Usted necesita cargar los numeros antes de hacer las operaciones.\n");

			}
			break;
		case 4:
			if(flagOperaciones == 1)
			{
				mostrarResultados(suma1);
				mostrarResultados(resta1);
				mostrarResultados(multiplicacion1);
				mostrarResultados(division1);
				mostrarResultados(factNum1);
				mostrarResultados(factNum2);
			}else
			{
				printf("Usted necesita hacer las operaciones antes de mostrarlas\n");

			}
			break;
		case 5:
			printf("Gracias por usar el programa.\n");
			break;
		default:
			printf("La opcion ingresada es incorrecta. intentelo nuevamente\n");

			break;
		}

	}while(opcion != 5);
	return EXIT_SUCCESS;
}
