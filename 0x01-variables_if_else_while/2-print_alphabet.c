#include <stdio.h>
/**
main-prints the alphabet
Return:0 if there is no error
*/
int main(void)
{
  char letter;

  for(letter = 'a'; letter <= 'z'; letter++){
    putchar(letter);
  }
  putchar('\n');
  return (0);
}
