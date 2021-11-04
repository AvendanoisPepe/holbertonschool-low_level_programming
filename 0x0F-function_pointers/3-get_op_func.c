#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - Puntero de funcion que selecciona la funcion a realizar.
 * @s:operador solicitado.
 * Return: Puntero a la funcion a realizar.
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	    {"+", op_add},
	    {"-", op_sub},
	    {"*", op_mul},
	    {"/", op_div},
	    {"%", op_mod},
	    {NULL, NULL}
	};

	int iterador = 0;

	while (ops[iterador].op != NULL)
	{
		if (strcmp(ops[iterador].op, s) == 0)
		{
			return (ops[iterador].f);
		}
		iterador++;
	}
	return (NULL);
}
