#include "main.h"
/**
 * fallara-Utulizando la recursion recorre los if  para verificar si el
 * radicando es igual a la raiz, si no aumenta el radicando y si no
 * encuentra raiz manda -1
 *@n:Raiz
 *@i: Radicando
 *Return: la raiz.
*/
int fallara(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i < n)
	{
		return (fallara(n, i + 1));
	}
	else
	{
		return (-1);
	}
}
/**
 * _sqrt_recursion-Returna la raiz cuadrada de n
 * @n:calcular la raiz cuadrada
 * Return:raiz.
*/
int _sqrt_recursion(int n)
{
	int num = 0;

	return (fallara(n, num));
}
