#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - Sumo los dos paramentros,
 * @a:Primer numero.
 * @b:Segundo numero.
 * Return: Suma de los dos numeros.
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Calcula la diferencia entre los dos parametros.
 * @a:Primer numero.
 * @b:Segundo numero.
 * Return:Diferencia entre los parametros.
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Calcula la multiplicacion de los parametros.
 * @a:Primero numero.
 * @b:Segundo numero.
 * Return:Multiplicacion de a por b.
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Calcula la division de los dos parametros.
 * @a:Primer numero.
 * @b:Segundo numero.
 * Return: Resultado de la operacion.
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Calcula el resto de la division de los parametros.
 * @a:Primer numero.
 * @b:Segundo numero.
 * Return:Resultado de la operacion.
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
