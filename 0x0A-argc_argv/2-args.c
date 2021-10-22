#include <stdio.h>
/**
 * main-imprime todos los argumentos que recibe
 * @argc:numero de argumentos que se le pasan al programa.
 * @argv:argumentos en array.
 * Return: finalizo bien si es 0 .
*/
int main(int argc, char * argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
        	printf("%s\n", argv[i]);
    	}
    	return (0);
}
