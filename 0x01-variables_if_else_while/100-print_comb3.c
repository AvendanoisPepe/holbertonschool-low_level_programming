#include <stdio.h>
/**
*main-prints two-digit combinations
*Return:0 if there is no error
*/
int main(void)
{
int primero;
int segundo;

for (primero = 48; primero <=56; primero++)
{
for (segundo = 49; segundo <= 57; segundo++)
{
if(segundo > primero)
{
putchar(primero);
putchar(segundo);
if (primero != 56 || segundo != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
