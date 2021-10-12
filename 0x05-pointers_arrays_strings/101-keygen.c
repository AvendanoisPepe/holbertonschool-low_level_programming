#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main-generates random passwords for the program 101-crackme.
 *Return:0 if there is no error
*/
int main(void)
{
	int clave[100];
	int suma = 0;
	int variable1 = 0;
	int variable2;

	srand(time(NULL));

	while (variable1 < 100)
	{
		clave[variable1] = rand() % 78;

		suma += (clave[variable1] + '0');

		putchar(clave[variable1] + '0');

		if ((2772 - suma) - '0' < 78)
		{
			variable2 = 2772 - suma - '0';
			suma += variable2;
			putchar(variable2 + 'n');
			break;
		}
		variable1++;
	}
	return (0);
}
