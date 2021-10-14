#include "main.h"
/**
 **cap_string-Converts the words in the string to uppercase.
 *@w:String to be converted.
 *Return: w
*/
char *cap_string(char *w)
{
	char arreglo[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(',
			    ')', '{', '}'};
	int variable = 0;
	int variable2 = 0;

        if (variable == 0 && w[variable] >= 'a' && w[variable] <= 'z')
	{
		w[variable] = -32;
	}
	
	while (w[variable] != '\0')
	{

		while (variable2 < 13)
		{
			if (w[variable] == arreglo[variable2])
			{
				if (w[variable + 1] >= 'a' && w[variable + 1] <= 'z')
				{
					w[variable] = -32;
				}
			}

			variable2++;
		}

		variable++;
	}

	return (w);
}
