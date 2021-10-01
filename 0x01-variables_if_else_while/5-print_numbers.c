#include <stdio.h>
/**
main-prints single digit base numbers
Return:0 if there is no error
*/
int main(void)
{
  int num = 0;

  while (num < 10){
    printf("%d", num);
    num++;
  }
  printf("\n");
  return (0);
}
