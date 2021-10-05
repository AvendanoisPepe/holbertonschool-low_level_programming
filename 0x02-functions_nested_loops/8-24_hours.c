#include "main.h"
/**
*jack_bauer-prints all the minutes of the day.
*/
void jack_bauer(void)
{
int num3;
int num4;
for (num3 = 0; num3 < 24; num3++)
{
for (num4 = 0; num4 < 60; num4++)
{
_putchar((num3 / 10) + '0');
_putchar((num3 % 10) + '0');
_putchar(':');

_putchar((num4 / 10) + '0');
_putchar((num4 % 10) + '0');
_putchar('\n');
}
}
}
