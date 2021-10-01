#include <stdio.h>
/**
*main-prints the possible combinations of a single number
*Return:0 if there is no error
*/
int main(void)
{
int numero = 48;

while (numero < 58)
{
putchar(numero);
if (numero != 57)
{
putchar(',');
putchar(' ');
}
numero++;
}
putchar('\n');
return (0);
}
