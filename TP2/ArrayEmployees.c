#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayEmployees.h"
#include "menus.h"


int initEmployees(Employee* lista, int tam)
{
    int todoOk = -1;

    for(int i = 0; i < tam; i ++)
    {
        lista[i].isEmpty = 1;
    }
    todoOk = 0;

    return todoOk;
}

int addEmployees(Employee* lista, int tam, int id, char name[], char lastName[], float salary, int sector)
{
    int ubicacion;
    int todoOk = -1;

    for(int i = 0; i < tam; i++)
    {
        if(lista[i].id == id)
        {
            todoOk = 1;
            break;
        }
        if(lista[i].isEmpty == 1)
        {
            ubicacion = i;
            break;
        }
        else
        {
            ubicacion = -1;
        }
    }
    if ((ubicacion != -1) && (ubicacion <= tam))
    {
        spncpy(lista[ubicacion].name, name);
        spncpy(lista[ubicacion].lastName, lastName);
        lista[ubicacion].id = id;
        lista[ubicacion].salary = salary;
        lista[ubicacion].sector = sector;
        lista[ubicacion].isEmpty = 0;
        todoOk = 0;
    }

    return todoOk;
}

int findEmployeeById(Employee* lista, int tam, int id)
{
    int ubicacion = -1;

    for(int i = 0; i < tam; i++)
    {
        if(lista[i].id == id && lista[i].isEmpty != 1)
        {
            ubicacion = id;

            break;
        }
    }


    return ubicacion;
}

int removeEmployee(Employee* lista, int tam, int id)
{
    int todoOk = -1;
    int ubicacion;
    char confirmacion = 'x';

    ubicacion = findEmployeeById(lista, tam, id);

    printf("El empleado con el id: %d es: %s \n", id, lista[ubicacion].name);
    printf("Esta seguro que desea eliminar este empleado? ingrese s para si o n para no.\n");
    scanf("%c", confirmacion);
    while(confirmacion != 's' || confirmacion != 'n')
    {
        printf("El empleado con el id: %d es: %s \n", id, lista[ubicacion].name);
        printf("Esta seguro que desea eliminar este empleado? ingrese s para si o n para no.\n");
        fflush(stdin);
        scanf("%c", &confirmacion);
        if((confirmacion == 's') && (ubicacion!= -1 && ubicacion< tam))
        {
            lista[ubicacion].isEmpty = 1
            todoOk = 0;
        }else if(confirmacion == 'n')
        {
            printf("Se ha cancelado la eliminacion del empleado con el id: %d \n", id);
            todoOk = 1;
        }else
        printf("ERROR! ingrese 's' para eliminar el empleado o 'n' para cancelar. \n");
        fflush(stdin);
        scanf("%c", &confirmacion);
    }
    return todoOk;
}

int sortEmployees(Employee* lista, int tam, int opcion)
{
    int todoOk = -1;
    Employee auxLista;

    for(int i = 0; i<tam; i++)
    {
        for(int j = i+1; j< tam; j++)
        {
            if((opcion == 1) && (lista[i].sector == lista[j].sector)&& (lista[i].name > lista[j].name))
            {
                auxLista = lista[i];
                lista[i] = lista[j];
                lista[j] = auxLista;
                todoOk = 0;
            }else if((opcion == 2) && (lista[i].sector == lista[j].sector) && (lista[i].name < lista[j].name))
            {
                auxLista = lista[i];
                lista[i] = lista[j];
                lista[j] = auxLista;
                todoOk = 0;
            }
        }
    }
    return todoOk;
}

int printEmployees(Employee* lista, int tam)
{
    int todoOk = -1;
    printf("\t ***Lista Empleados***\n\n");
    printf("Id      Nombre      Apellido        Salario     Sector\n");
    for(int i = 0; i<tam; i++)
    {
        if(lista[i].isEmpty == 0)
        {
            printf("%5d     %20s    %20s    %10f    %2d \n", lista[i].id, lista[i].name, lista[i].lastName, lista[i].salary, lista[i].sector);
        }
    }


    return todoOk;
}
