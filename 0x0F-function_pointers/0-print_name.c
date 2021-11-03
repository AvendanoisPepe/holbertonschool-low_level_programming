#include "function_pointers.h"
/**
 * print_name - Imprime un nombre.
 * @name:Nombre.
 * @f:Puntero a la funcion que imprime el parametro name.
 * Return: Nada.
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
