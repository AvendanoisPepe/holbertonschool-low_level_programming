#include <stdio.h>
/**
 * main-cambia el nombre del archivo
 * @argc:numero de argumentos que se le pasan al programa.
 * @argv:argumentos en array.
*/
int main(int argc, char *argv[])
{
	printf("%s \n", *argv[argc - 1]);
}