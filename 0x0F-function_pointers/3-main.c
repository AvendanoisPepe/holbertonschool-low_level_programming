#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Funcion princupal que realiza operaciones basicas,
 * @argc:Numero de argumentos,
 * @argv:Matrix de argumentios.
 * Return:0 si funciona.
*/
int main(int argc, char *argv[])
{
	int (*operador)(int, int);
	int ar1;
	int ar2;
	int total;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ar1 = atoi(argv[1]);
	ar2 = atoi(argv[3]);

	operador = get_op_func(argv[2]);

	if (operador == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	total = operador(ar1, ar2);

	printf("%d\n", total);

	return (0);
}
