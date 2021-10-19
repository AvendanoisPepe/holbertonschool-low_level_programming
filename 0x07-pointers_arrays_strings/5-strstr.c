#include "main.h"
/**
 *  *_strstr-Encuentra la subcadena.
 * @haystack:cadena en la cual se busca.
 * @needle:Subcadena que se debe buscar
 * Return:haystack
*/
char *_strstr(char *haystack, char *needle)
{
	int dat1 = 0;
	int dat2 = 0;

	while (haystack[dat1] != '\0')
	{
		while (needle[dat2] != '\0')
		{
			if (haystack[dat1 + dat2] != needle[dat2])
			{
				break;
			}
			dat2++;
		}
		if (!needle[dat2])
		{
			return (&haystack[dat1]);
		}
		dat1++;
	}
	if (haystack != needle)
	{
		haystack = '\0';
	}
	return (haystack);
}
