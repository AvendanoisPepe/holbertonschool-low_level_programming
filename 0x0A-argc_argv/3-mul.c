#include <stdio.h>
#include <stdlib.h>
/**
 * main- multiploca los dos argumentos que se le manda.
 * @argc:numero de argumentos que se le pasan al programa.
 * @argv:argumentos en array.
 * Return: finalizo bien si es 0 .
*/
int main(int argc, char *argv[])
{
	int primerArgumento;
	int segundoArgumento;
	int total;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	primerArgumento = atoi(argv[1]);

	segundoArgumento = atoi(argv[2]);

	total = primerArgumento * segundoArgumento;

	printf("%d\n", total);

	return (0);
}
