#include "main.h"
/**
 *rev_string-reverse chain.
 *@s: chain that is inverted.
*/
void rev_string(char *s)
{
	int variable;

	int variable2 = 0;

	int contador = 0;

	char guardar;

	for (variable = 0; s[variable] != '\0'; variable++)
	{
	}

	variable2 = variable - 1;

	while (contador < variable / 2)
	{
		guardar = s[contador];

		s[contador] = s[variable2];

		s[variable2--] = guardar;

		contador++;
	}
}
