#include <stdio.h>
/**
 *main-Imprime la cantidad  minima de monedas para cambiar x cantidad de dinero
 * @argc:numero de argumentos que se le pasan al programa.
 * @argv:argumentos en array.
 * Return: finalizo bien si es 0 .
*/
int main(int argc, char *argv[])
{
	int monedas;
	int iterador;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	monedas = atoi(argv[1]);
	if (monedas < 0)
	{
		printf("0\n");
		return (0);
	}
	for (iterador = 0; monedas > 0; iterador++)
	{
		if (monedas >= 25)
		{
			monedas = monedas - 25;
		}
		else if (monedas >= 10)
		{
			monedas = monedas - 10;
		}
		else if (monedas >= 5)
		{
		monedas = monedas - 5;
		}
		else if (monedas >= 2)
		{
			monedas = monedas - 2;
		}
		else if (monedas >= 1)
		{
			monedas = monedas - 1;
		}
	}
	printf("%d\n", iterador);
	return (0);
}
