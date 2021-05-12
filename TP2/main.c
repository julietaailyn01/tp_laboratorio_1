#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menus.h"
#include "ArrayEmployees.h"
#define TAM 3

int main()
{
    Employee empleados[TAM];
    int inicializarEmpleadosOK;
    int todoOk;

    inicializarEmpleadosOK = initEmployees(empleados, TAM);

    if(inicializarEmpleadosOK == -1)
    {
        printf("No se pudo inicializar los empleados.");
    }

    menuPrincipal(empleados, TAM);

    return 0;
}
