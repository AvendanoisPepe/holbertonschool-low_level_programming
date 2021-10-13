#include "main.h"
/**
 * *_strcat-concatenate the two strings.
 *@dest:string in which *src is added.
 *@src:string to be added in *dest
 *Return:dest
 */
char *_strcat(char *dest, char *src)
{
	int variable = 0;
	int variable2 = 0;

	for (; dest[variable] != '\0'; variable++)
	{
	}

	for (; src[variable2] != '\0'; variable2++)
	{
		dest[variable] = src[variable2];

		variable++;
	}
	dest[variable] = '\0';

	return (dest);
}
