#include "main.h"
/**
 *string_toupper-Converts the lowercase letters of the string to uppercase
 *letters
 *@w:String to be converted.
 *Return:w
*/
char *string_toupper(char *w)
{
	int variable = 0;

	while (w[variable] != '\0')
	{
		if (w[variable] >= 'a' && w[variable] <= 'z')
		{
			w[variable] = w[variable] - 32;
		}

		variable++;
	}

	return (w);
}
