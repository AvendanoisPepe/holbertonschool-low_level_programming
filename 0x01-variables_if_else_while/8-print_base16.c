#include <stdio.h>
/**
*main-prints base 16 numbers in lowercase.
*Return:0 if there is no error
*/
int main(void)
{
int numerito = 48;
char caracter = 'a';

while (numerito < 58)
{
putchar(numerito);
numerito++;
}
while (caracter <= 'f')
{
putchar(caracter);
caracter++;
}
putchar('\n');
return (0);
}
