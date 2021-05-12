#ifndef ARRAYEMPLOYEES_H_INCLUDED
#define ARRAYEMPLOYEES_H_INCLUDED
#include "menus.h"
struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;

}typedef Employee;

int initEmployees(Employee* lista, int tam);
int addEmployees(Employee* lista, int tam, int id, char name[], char lastName[], float salary, int sector);
int findEmployeeById(Employee* lista, int tam, int id);
int removeEmployee(Employee* lista, int tam, int id);
int sortEmployees(Employee* lista, int tam, int opcion);
int printEmployees(Employee* lista, int tam);

#endif // ARRAYEMPLOYEES_H_INCLUDED


