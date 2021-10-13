#include "main.h"
/**
 *_strncpy-copies the src string to dest.
 *@dest:destination
 *@src:origin
 *@n:number of bytes that can be copied from the src string.
 *Return:dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int variable = 0;

	for (; src[variable] != '\0' && variable < n; variable++)
	{
		dest[variable] = src[variable];
	}

	for (; variable < n; variable++)
	{
		dest[variable] = '\0';
	}

	return (dest);
}
