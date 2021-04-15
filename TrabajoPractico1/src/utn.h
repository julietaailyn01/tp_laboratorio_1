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
 * \return float devuelve el resultado de la suma
 *
 */
float suma(int num1, int num2);


/** \brief funcion que realiza una resta entre dos numeros
 *
 * \param num1 int primer numero a restar
 * \param num2 int segundo numero a restar
 * \return float devuelve el resultado de la resta
 *
 */
float resta(int num1, int num2);

/** \brief funcion que realiza una multiplicacion entre dos numeros
 *
 * \param num1 int primer numero a multiplicar
 * \param num2 int segundo numero a multiplicar
 * \return float devuelve el resultado de la multiplicacion
 *
 */
float multiplicacion(int num1, int num2);

/** \brief funcion que realiza una division entre dos numeros
 *
 * \param num1 int dividendo
 * \param num2 int divisor
 * \return float devuelve el resultado de la division
 *
 */
float division(int num1, int num2);

/** \brief funcion que muestra el factorial de un numero
 *
 * \param num int numero el cual queremos realizar el factoreo
 * \return int devuelve el resultado del factoreo.
 *
 */
int factorial(int num);

/** \brief funcion para mostrar resultados en pantalla
 *
 * \param resultado float numero el cual se desea mostrar en pantalla
 * \return vacio, esta funcion no devuelve nada.
 *
 */
void mostrarResultados (float resultado);
