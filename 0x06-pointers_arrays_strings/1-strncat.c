#include "main.h"
/**
 *_strncat-appends n bytes of the src string to the dest string
 *@dest:destination
 *@src:origin
 * @n:number of numbers to add from src.
 *Return:dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	int variable = 0;
	int variable2 = 0;

	for (; dest[variable] != '\0'; variable++)
	{
	}

	for (; src[variable2] != '\0' && variable2 < n; variable2++)
	{
		dest[variable] = src[variable2];

		variable++;
	}
	dest[variable] = '\0';

	return (dest);
}
