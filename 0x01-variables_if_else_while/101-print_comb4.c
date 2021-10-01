#include <stdio.h>
/**
*main-prints the three-digit combinations
*Return:0 if there is no error
*/
int main(void)
{
int primero;
int segundo;
int tercero;
for (primero = 48; primero < 58; primero++)
{
for (segundo = 49; segundo < 58; segundo++)
{
for (tercero = 50; tercero < 58; tercero++)
{
if (tercero > segundo && segundo > primero)
{
putchar(primero);
putchar(segundo);
putchar(tercero);
if (primero != 55 || segundo != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
