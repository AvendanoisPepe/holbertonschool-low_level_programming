#include "main.h"
/**
 **leet-Encodes the string w in 1337.
 *@w:chain to be altered.
 *Return:w
*/
char *leet(char *w)
{
	char *original = "aAeEoOtTlL";
	char *reemplazo = "4433007711";

	int variable1 = 0;
	int variable2 = 0;

	while (w[variable1] != '\0')
	{
		variable2 = 0;
		
		while (variable2 < 10)
		{
			if (w[variable1] == original[variable2])
			{
				w[variable1] = reemplazo[variable2];
			}

			variable2++;
		}

		variable1++;
	}

	return (w);
}
