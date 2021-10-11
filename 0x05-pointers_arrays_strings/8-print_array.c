#include "main.h"
#include <stdio.h>
/**
 *print_array-prints n elements of the integer array.
 *@a:matrix to be printed.
 *@n:number of elements.y
*/
void print_array(int *a, int n)
{
	int contador = 0;

	while (contador < n)
	{
		if (contador == 0)
		{
			printf("%d", a[contador]);
		}
		else
		{
			printf(", %d", a[contador]);
		}

		contador++;
	}

	printf("\n");
}
