#include <stdio.h>
#include <stdlib.h>
/**
 * main- suma todos los argumentos que se le pasen.
 * @argc:numero de argumentos que se le pasan al programa.
 * @argv:argumentos en array.
 * Return: finalizo bien si es 0 .
*/
int main(int argc, char *argv[])
{
	int bucle1 = 1;
	int bucle2 = 0;
	int sumita;

	while (bucle1 < argc)
	{
		bucle2 = 0;
		while (argv[bucle1][bucle2])
		{
			if (argv[bucle1][bucle2] < '0' || argv[bucle1][bucle2] > '9')
			{
				printf("Error\n");
				return (1);
			}
			bucle2++;
		}
		sumita =  sumita + atoi(argv[bucle1]);
		bucle1++;
	}
	printf("%d\n", sumita);
	return (0);
}
