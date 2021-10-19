#include "main.h"
/**
 *  *_strpbrk-Busca en la cadena s un conjunto de bytes de la cadena accept.
 * @s:cadena en la cual se busca coincidencia.
 * @accept:cadena que tiene los bytes que se deben buscar,
 * Return: retorna s y si no encuentra coincidencias retorna null.
*/
char *_strpbrk(char *s, char *accept)
{
	int datito = 0;
	int datito2;

	for (; *s != '\0'; datito++)
	{
		for (datito2 = 0; accept[datito2] != '\0';  datito2++)
		{
			if (*s == accept[datito2])
			{
				return (s);
			}
		}
		s++;
	}
	if (s != accept)
	{
		s = '\0';
	}
	return (s);
}
