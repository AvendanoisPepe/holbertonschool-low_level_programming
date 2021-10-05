#include <stdio.h>
/**
*/
int main(void)
{
 long int contador = 1;
 long int primero = 1;
 long int segundo = 2;
 long int numero;

 while (contador <= 50)
   {
     if (primero != 20365011074)
       {
	 printf("%ld, ", primero);
       }
     else
       {
	 printf("%ld\n", primero);
       }

     numero = primero + segundo;

     primero = segundo;

     segundo = numero;

     contador++;
   }
 return (0);
}
