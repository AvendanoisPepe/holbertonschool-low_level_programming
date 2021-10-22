#include <stdio.h>
/**
 * main-cambia el nombre del archivo
 * @argc:numero de argumentos que se le pasan al programa.
 * @argv:argumentos en array.
 * Return: finalizo bien si es 0 .
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
