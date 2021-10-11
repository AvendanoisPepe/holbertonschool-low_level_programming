#include "main.h"
/**
 * *_strcpy-Copies the string from src to the dest pointer including the final
 * null data.
 *@dest:pointer to which we copy the string.
 *@src:string which is copied.
 *Return:pointer dest.
*/
char *_strcpy(char *dest, char *src)
{

	int variable;

	int variable2 = 0;

	for (variable = 0; src[variable] != '\0'; variable++)
	{
	}

	while (variable2 < variable)
	{
		dest[variable2] = src[variable2];
		variable2++;
	}
	dest[variable2] = '\0';

	return (dest);
}
