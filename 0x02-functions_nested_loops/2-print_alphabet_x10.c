#include "main.h"
/**
*print_alphabet_x10-prints the alphabet 10 times
*Return:0 if there is no error
*/
void print_alphabet_x10(void)
{
char caracter;
int numero;

for (numero = 0; numero < 10; numero++)
{
for (caracter = 'a'; caracter <= 'z'; caracter++)
{
_putchar(caracter);
}
_putchar('\n');
}
}
