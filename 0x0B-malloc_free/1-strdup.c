#include "main.h"
#include <stdlib.h>
/**
 * *_strdup-Copea la cadena str
 * @str:Cadena a copiar.
 * Return:Si funciona returna un puntero a la cadena copiada
 * si no null.
*/
char *_strdup(char *str)
{
	char *guardarT;
	unsigned int iterador = 0;
	unsigned int longitud = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[longitud])
	{
		longitud++;
	}

	guardarT = malloc(sizeof(char) * longitud);

	if (guardarT == NULL)
	{
		return (NULL);
	}

	for (iterador = 0; (guardarT[iterador] = str[iterador]) != '\0'; iterador++)
	{

	}

	return (guardarT);
}
