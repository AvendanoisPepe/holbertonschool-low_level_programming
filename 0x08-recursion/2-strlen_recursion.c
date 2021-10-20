#include "main.h"
/**
 *_strlen_recursion-Imprime la longitud de la cadena.
 * @s: cadena.
 * Return: retorna la longitud de la cadena.
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
