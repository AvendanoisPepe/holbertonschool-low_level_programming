#include "main.h"
#include <stdlib.h>
/**
 * *str_concat-Concatenamos las dos cadenas pasadas por parametro.
 * @s1:Primera cadena.
 * @s2:Segunda cadena.
 * Return:Puntera a la nueva cadena concatenada y si falla null.
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int longitud1 = 0, longitud2 = 0, iterador1, iterador2;
	char *ss;

	if (s1 == NULL)
		longitud1 = 0;
	else
		while (s1[longitud1])
		{
			longitud1++;
		}
	if (s2 == NULL)
		longitud2 = 0;
	else
		while (s2[longitud2])
		{
			longitud2++;
		}
	ss = malloc(sizeof(char) * (longitud1 + longitud2 + 1));
	if (ss == NULL)
		return (NULL);
	if (s1)
		for (iterador1 = 0; iterador1 < longitud1; iterador1++)
		{
			ss[iterador1] = s1[iterador1];
		}
	if (s2)
		for (iterador2 = 0; iterador2 < (longitud1 + longitud2); iterador2++)
		{
			ss[iterador1] = s2[iterador2];
			iterador1++;
		}
	ss[iterador1] = '\0';
	return (ss);
}
