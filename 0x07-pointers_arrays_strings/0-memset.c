#include "main.h"
/**
 *  *_memset-The memory is filled with a constant byte.
 * @s: Espacio de memorio a completar o rellenar.
 * @b:char que se debe copiar.
 * @n:el numero de bytes que se copea b.
 * Return:el puntero al s
*/
char *_memset(char *s, char b, unsigned int n)
{
        unsigned int datito = 0;

        while (datito < n)
        {
                s[datito] = b;
                datito++;
        }
        return (s);
}
