#include "main.h"
/**
 *reverse_array-inverts the matrix of numbers.
 *@a:array that is reversed.
 *@n:number of array elements.
*/
void reverse_array(int *a, int n)
{
	int guardar;
	int variable1;
	int variable2 = 0;

	variable1 = n - 1;

	while (variable2 < n / 2)
	{
		guardar = a[variable2];

		a[variable2] = a[variable1];

		a[variable1--] = guardar;

		variable2++;
	}
}
