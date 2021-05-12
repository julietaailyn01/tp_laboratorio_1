/*
 * empleados.h
 *
 *  Created on: 12 may. 2021
 *      Author: juli
 */

#ifndef EMPLEADOS_H_
#define EMPLEADOS_H_

struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;

}typedef Employee;

int iniciarEmpleados(Employee* lista, int tam);
int addEmployees(Employee* lista, int tam, int id, char name[], char lastName[], float salary, int sector);
int findEmployeeById(Employee* lista, int tam, int id);
int removeEmployee(Employee* lista, int tam, int id);
int sortEmployees(Employee* lista, int tam, int opcion);
int printEmployees(Employee* lista, int tam);


#endif /* EMPLEADOS_H_ */
