#include <stdio.h>
/**
*main-prints the alphabet except q and c
*Return:0 if there is no error
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'c')
{
putchar(letter);
}
}
putchar('\n');
return (0);
}
