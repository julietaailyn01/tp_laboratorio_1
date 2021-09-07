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
	setbuf(stdout, NULL);
	//declaro las variables
	int opcion;
	int num1;
	int flagNum1;
	int num2;
	int flagNum2;
	int flagOperaciones;
	int sumaOk;
	int restaOk;
	int multiplicacionOk;
	int divisionOk;
	int fact1Ok;
	int fact2Ok;
	float resultadoSuma;
	float resultadoResta;
	float resultadoMultiplicacion;
	float resultadoDivision;
	float resultadoFactNum1;
	float resultadoFactNum2;

	//inicializo las variables necesarias

	flagNum1 = 0;
	flagNum2 = 0;
	flagOperaciones = 0;


	do
	{
		printf("\t ***Menu*** \n\n");
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

		printf("\n");

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

			}else
			{
				printf("usted necesita inicializar el primer numero antes de inicializar el segundo. \n\n");

			}
			break;
		case 3:
			if (flagNum2 == 1)
			{
				flagOperaciones = 1;
				sumaOk = suma(num1, num2, &resultadoSuma);
				restaOk = resta(num1, num2, &resultadoResta);
				multiplicacionOk = multiplicacion(num1, num2, &resultadoMultiplicacion);
				divisionOk = division(num1, num2, &resultadoDivision);
				fact1Ok = factorial(num1, &resultadoFactNum1);
				fact2Ok = factorial(num2, &resultadoFactNum2);
				printf("Se hicieron todas las operaciones con exito.\n");
				system("pause");

			}else
			{
				printf("Usted necesita cargar los numeros antes de hacer las operaciones.\n\n");

			}
			break;
		case 4:
			if(flagOperaciones == 1)
			{
				mostrarResultados(resultadoSuma, sumaOk);
				mostrarResultados(resultadoResta, restaOk);
				mostrarResultados(resultadoMultiplicacion, multiplicacionOk);
				mostrarResultados(resultadoDivision, divisionOk);
				mostrarResultados(resultadoFactNum1, fact1Ok);
				mostrarResultados(resultadoFactNum2, fact2Ok);
			}else
			{
				printf("Usted necesita hacer las operaciones antes de mostrarlas\n\n");

			}
			printf("\n");
			flagNum1 = 0;
			flagNum2 = 0;
			flagOperaciones = 0;
			system("pause");
			break;
		case 5:
			printf("Gracias por usar el programa.\n");
			break;
		default:
			printf("La opcion ingresada es incorrecta. intentelo nuevamente\n\n");

			break;
		}

	}while(opcion != 5);
	return EXIT_SUCCESS;
}

