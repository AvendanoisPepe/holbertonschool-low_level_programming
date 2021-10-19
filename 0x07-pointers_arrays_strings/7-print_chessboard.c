#include "main.h"
/**
 * print_chessboard-Imprime un tablero de ajedrez
 * @a:matriz de dos dimensiones.
*/
void print_chessboard(char (*a)[8])
{
	int vertical = 0;
	int horizontal = 0;

	while (vertical < 8)
	{
		horizontal = 0;
		while (horizontal < 8)
		{
			_putchar(a[vertical][horizontal]);
			horizontal++;
		}
		_putchar('\n');
		vertical++;
	}
}
