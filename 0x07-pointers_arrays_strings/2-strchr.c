#include "main.h"
/**
 *  *_strchr-	Encuentra el caracter en la cadena.
 * @s: cadena en la cual se hace la busqueda.
 * @c:caracter que se debe buscar.
 * *Return:devuelve s.
*/
char *_strchr(char *s, char c)
{
	int datito = 0;

	for (; *s != '\0'; datito++)
	{
		if (*s == c)
		{
			break;
		}
		s++;
	}

	if (*s != c)
	{
		s = '\0';
	}
	return (s);
}
