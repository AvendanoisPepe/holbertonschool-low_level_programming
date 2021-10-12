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
		clave[variable1] = rand() % 50;

		suma += (clave[variable1] + '0');

		putchar(clave[variable1] + '0');

		if ((3214 - suma) - '0' < 50)
		{
			variable2 = 3214 - suma - '0';
			suma += variable2;
			putchar(variable2 + '0');
			break;
		}
		variable1++;
	}
	return (0);
}
