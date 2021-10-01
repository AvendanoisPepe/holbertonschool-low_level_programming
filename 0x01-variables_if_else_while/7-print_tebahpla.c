#include <stdio.h>
/**
*Prints the alphabet upside down
*Return:0 if there is no error
*/
int main(void)
{
char letter;

for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n');
return (0);
}
