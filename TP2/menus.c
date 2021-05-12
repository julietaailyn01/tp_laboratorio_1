#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menus.h"
#include "ArrayEmployees.h"

int menuPrincipal(Employee* listas, int tam)
{
    int opcion;
    int todoOk = -1
    int flagAgregar = 0;
    int idAutomatico = 1;
    int id;
    char nombre [51];
    char apellido [51];
    float salario;
    int sector;
    char confirmacion;

    do
    {
        printf("\t ***Menu Principal***\n\n");
        printf("1. Agregar Empleado.\n");
        printf("2. Modificar Empleado.\n");
        printf("3. Eliminar Empleado.\n");
        printf("4. Informar Empleado.\n");
        printf("5. Salir");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:

            printf("\nIngrese el nombre del empleado: \n");
            fflush(stdin);
            gets(nombre);
            printf("Ingrese apellido: \n");
            fflush(stdin);
            gets(apellido);
            printf("Ingrese salario: \n");
            scanf("%f", &salario);
            printf("Ingrese sector: \n");
            scanf("%d", &sector);
            id = idAutomatico;
            idAutomatico++;
            addEmployees(&listas, tam, id, nombre, apellido, salario, sector);

            break;
        case 2:
            do
            {
                printEmployees(&listas, tam);
                printf("Ingrese el id de la persona que desea modificar: \n");
                scanf("%d", &id);
                printf("Esta seguro que desea modificar el empleado: %d, ingrese 's' para si o 'n' para no \n", id);
                scanf("%c", &confirmacion);

                if(confirmacion=='s')
                {
                    printf("\nIngrese el nombre del empleado: \n");
                    fflush(stdin);
                    gets(nombre);
                    printf("Ingrese apellido: \n");
                    fflush(stdin);
                    gets(apellido);
                    printf("Ingrese salario: \n");
                    scanf("%f", &salario);
                    printf("Ingrese sector: \n");
                    scanf("%d", &sector);
                    addEmployees(&listas, tam, id, nombre, apellido, salario, sector);
                }
                else if (confirmacion == 'n')
                {
                    printf("La modificacion se ha cancelado \n");
                }
                else
                {
                    printf("La respuesta ingresada es incorrecta \n");
                }
            }
            while(confirmacion == 's' || confirmacion == 'n');
            break;
        case 3:

            printEmployees(&listas, tam);
            printf("Ingrese el id de la persona que desea eliminar: \n");
            scanf("%d", &id);

            removeEmployee(&listas, tam, id);

            break;
        case 4:
            todoOk = menuInformar(&listas, tam);
            if(todoOk<0)
            {
                printf("ERROR");
            }
            break;
        }
    }while(opcion!= 5);

    return todoOk;
}

int menuInformar(Employee* listas, int tam)
{
    int todoBien = -1;
    int opcion;
    float acumuladorSalario = 0;
    float promedioSalario;
    int contadorSalarioMayorAPromedio = 0;
    int contadorEmpleados;

    printf("\t ***Menu Informes***\n\n");
    printf("1. Listar empleados de forma ascendente. \n");
    printf("2. Listar empleados de forma descendente. \n");
    printf("3. Total y promedio de los salarios. \n");
    scanf("%d", &opcion);

    switch(opcion)
    {
    case 1:
    case 2:
        sortEmployees(&listas, tam, opcion);
        break;
    case 3:
        for(int i = 0; i < tam; i++)
        {
            if (listas[i].isEmpty == 0)
            {
                acumuladorSalario = acumuladorSalario + listas[i].salary;
                contadorEmpleados++;
            }
        }
        promedioSalario = acumuladorSalario/contadorEmpleados;
        for(int i = 0; i < tam; i++)
        {
            if(listas[i].salary > promedioSalario)
            {
                contadorSalarioMayorAPromedio++;
            }
        }

        printf("El promedio del sueldo de los empleados es: %2.f \n", promedioSalario);
        printf("Hay %d empleados con un sueldo mayor al promedio \n", contadorSalarioMayorAPromedio);
        todoBien = 0;
        break;
    }

    return todoBien;
}

