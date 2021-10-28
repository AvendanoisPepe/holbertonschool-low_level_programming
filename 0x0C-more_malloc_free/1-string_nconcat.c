#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat-Concatena n bytes de s2 a s1
 * @s1:primera cadena-recibe
 * @s2:segunda cadena-da
 * @n:numero de bytes a concatenera.
 * Return:Puntero a la cadena.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int longitud1 = 0, longitud2 = 0, iterador1, iterador2;
	char *guardarT;

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
	if (n <longitud2)
		guardarT = malloc(sizeof(char) * (longitud1 + n + 1));
	else
		guardarT = malloc(sizeof(char) * (longitud1 + longitud2 + 1));
	iterador2 = 0;
	iterador1 = 0;
	if (guardarT == NULL)
		return (NULL);
	for (; iterador1 < longitud1; iterador1++)
		guardarT[iterador1] = s1[iterador1];
	if (n < longitud2)
		for (; iterador1 < (longitud1 + n); iterador1++)
			guardarT[iterador1] = s2[iterador2++];
	else
		for (; n >= longitud2 && iterador1 < (longitud1 + longitud2); iterador1++)
			guardarT[iterador1] = s2[iterador2++];
	guardarT[iterador1] = '\0';
	return (guardarT);
}
