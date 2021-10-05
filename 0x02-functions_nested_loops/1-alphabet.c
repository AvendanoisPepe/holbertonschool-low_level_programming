#include "main.h"
/**
*print_alphabet-prints the alphabet
*Return:0 if there is no error
*/
void print_alphabet(void)
{
char caracter;
for (caracter = 'a'; caracter <= 'z'; caracter++)
{
_putchar(caracter);
}
_putchar('\n');
}
