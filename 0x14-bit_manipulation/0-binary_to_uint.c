#include "main.h"
/**
 * binary_to_uint - Convierte un numero binario en un unsigned int.
 * @b:Cadena que contiene el numero binario.
 * Return:La conversion.
 */
unsigned int binary_to_uint(const char *b)
{
	int contador = 0;
	unsigned int operacion = 0;
	unsigned int exp = 1;

	if (b == NULL)
	{
		return (0);
	}
	for (; b[contador] != '\0'; contador++)
		;

	contador--;
	for (; contador >= 0; contador--)
	{
		if (b[contador] != '0' && b[contador] != '1')
		{
			return (0);
		}
		operacion = operacion + (b[contador] - '0') * exp;
		exp = exp * 2;
	}
	return (operacion);
}
