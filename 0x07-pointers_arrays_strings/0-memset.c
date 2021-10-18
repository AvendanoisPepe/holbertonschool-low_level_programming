#include "main.h"
/**
 * 
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