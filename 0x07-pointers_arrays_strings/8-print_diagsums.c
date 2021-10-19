#include "main.h"
#include <stdio.h>
/**
 *print_diagsums-imprime la suma de dos diagonales de un array,
 *@a:rows
 *@size: colums
*/
void print_diagsums(int *a, int size)
{
	int contador = 0;

	unsigned int prisuma = 0;
	unsigned int segsuma = 0;

	while (contador < size)
	{
		prisuma += a[(size * contador) + contador];

		segsuma += a[(size * (contador + 1)) - (contador - 1)];
		contador++;
	}

	printf("%d, %d \n", prisuma, segsuma);
}
