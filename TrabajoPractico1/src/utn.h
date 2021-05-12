/*
 * utn.h
 *
 *  Created on: 12 abr. 2021
 *      Author: juli
 */

#ifndef UTN_H_
#define UTN_H_



#endif /* UTN_H_ */



/** \brief funcion que realiza una suma entre dos numeros
 *
 * \param num1 int primer numero a sumar
 * \param num2 int segundo numero a sumar
 * \param *resultado float espacio en memoria donde guardo el resultado de la operacion
 * \return int devuelve un 0 si la operacion no se pudo realizar o 1 si se realizo con exito
 *
 */
int suma(int num1, int num2, float *resultado);


/** \brief funcion que realiza una resta entre dos numeros
 *
 * \param num1 int primer numero a restar
 * \param num2 int segundo numero a restar
 * \param *resultado float espacio en memoria donde guardo el resultado.
 * \return int devuelve un 0 si la operacion no se pudo realizar o 1 si se realizo con exito
 *
 */
int resta(int num1, int num2, float *resultado);

/** \brief funcion que realiza una multiplicacion entre dos numeros
 *
 * \param num1 int primer numero a multiplicar
 * \param num2 int segundo numero a multiplicar
 * \param *resultado float espacio en memoria donde guarda el resultado
 * \return int devuelve un 0 si la operacion no se pudo realizar o 1 si se realizo con exito
 *
 */
int multiplicacion(int num1, int num2, float *resultado);

/** \brief funcion que realiza una division entre dos numeros
 *
 * \param num1 int dividendo
 * \param num2 int divisor
 * \param *resultado float espacio en memoria donde guarda el resultado.
 * \return int devuelve un 0 si la operacion no se pudo realizar o 1 si se realizo con exito
 *
 */
int division(int num1, int num2, float *resultado);

/** \brief funcion que muestra el factorial de un numero
 *
 * \param num int numero el cual queremos realizar el factoreo
 * \param *resultado float espacio en memoria donde guarda el resultado.
 * \return int devuelve un 0 si la operacion no se pudo realizar o 1 si se realizo con exito
 *
 */
int factorial(int num, float *resultado);

/** \brief funcion para mostrar resultados en pantalla
 *
 * \param resultado float numero el cual se desea mostrar en pantalla
 * \param todoOk int recibe un parametro que le indica si la operacion salio bien o no.
 * \return vacio, esta funcion no devuelve nada.
 *
 */
void mostrarResultados (float resultado, int todoOk);
