#include <stdio.h>
/**
 * main-imprime el numero de argumentos que se les pasa.
 * @argc:numero de argumentos que se le pasan al programa.
 * @argv:argumentos en array.
 * Return: finalizo bien si es 0 .
*/
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
