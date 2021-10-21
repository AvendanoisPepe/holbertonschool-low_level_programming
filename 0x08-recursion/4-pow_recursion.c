#include "main.h"
/**
 * _pow_recursion- eleva la base x al exponente de y
 * @x:base.
 * @y:exponente
 * Return: Retorna el resultado de x elevado
*/
int _pow_recursion(int x, int y)
{
	int mismo = 1;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - mismo));
}
