#include "main.h"
/**
 *_atoi-converts a text string to an integer.
 *@s:chain.
 *Return:the converted number.
*/
int _atoi(char *s)
{
	int variable;
	int variable2;
	int variable3 = 0;
	int variable4 = 0;
	int variable5 = 0;
	int variable6 = 0;

	for (variable = 0; s[variable] != '\0'; variable++)
	{
	}
	for (variable2 = 0; variable2 < variable && variable3 == 0; variable2++)
	{
		if (s[variable2] == '-')
		{
			++variable4;
		}
		if (s[variable2] >= '0' && s[variable2] <= '9')
		{
			variable5 = s[variable2] - '0';
			if (variable4 % 2)
			{
				variable5 = -variable5;
			}
			variable6 = variable6 * 10 + variable5;
			variable3 = 1;
			if (s[variable2 + 1] < '0' ||  s[variable2 + 1] > '9')
			{
				break;
			}

			variable3 = 0;
		}
	}

	if (variable3 == 0)
	{
		return (0);
	}

	return (variable6);
}
