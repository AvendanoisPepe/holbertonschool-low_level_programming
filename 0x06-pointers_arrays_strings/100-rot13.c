#include "main.h"
/**
 **rot13-Print a string in root13
 *@w:chain being modified.
 *Return:w
*/
char *rot13(char *w)
{
	char original[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char reemplazo[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int variable1 = 0;
	int variable2 = 0;

	while (w[variable1] != '\0')
	{
		variable2 = 0;
		while (original[variable2] != '\0')
		{
			if (w[variable1] == original[variable2])
			{
				w[variable1] = reemplazo[variable2];
				break;
			}

			variable2++;
		}

		variable1++;
	}

	return (w);
}
