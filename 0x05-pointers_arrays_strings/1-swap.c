#include "main.h"
/**
 *swap_int-the values of two integers with three variables are exchanged
 *@a:first pointer
 *@b:Second first pointer
*/
void swap_int(int *a, int *b)
{
	int intercambio;

	intercambio = *a;

	*a = *b;

	*b = intercambio;
}
