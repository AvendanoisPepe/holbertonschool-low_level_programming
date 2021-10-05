#include "main.h"
#include <stdio.h>
/**
*times_table-prints the table of nine
*/
void times_table(void)
{
int num1 = 0;
int num2 = 0;
int num3;

while (num1 < 10)
{
num2 = 0;
while (num2 < 10)
{
num3 = num2 *num1;
if (num2 == 0)
{
_putchar(num3 + '0');
}

if (num3 < 10 && num2 != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(num3 + '0');
}
else if (num3 >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((num3 / 10) + '0');
_putchar((num3 % 10) + '0');
}
num2++;
}
num1++;
_putchar('\n');
}
}
