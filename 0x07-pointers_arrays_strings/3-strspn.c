#include "main.h"
/**
 * _strspn-obvio la longitud de una subcadena de prefijo
 * @s:cadena en la cual se busca o evalua.
 * @accept:cadena que tiene los caracter a coincidir con s.
 * Return:el numero de bytes.
*/
unsigned int _strspn(char *s, char *accept)
{
	int prici = 0, total = 0;
	int segci = 0, recarga;

	while (s[prici] != '\0')
	{
		recarga = 0;
		segci = 0;
		while (accept[segci] != '\0')
		{
			if (s[prici] == accept[segci])
			{
				total++;
				recarga = 9;
			}

			segci++;
		}

		if (recarga == 0)
		{
			return (total);
		}

		prici++;
	}

	return (0);
}
