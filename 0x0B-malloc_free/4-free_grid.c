#include "main.h"
#include <stdlib.h>
/**
 * free_grid-Libera la cuadricuala o regilla que creamos.
 * @grid:cuadricula o regilla.
 * @height:alto de la cuadricula o regilla.
 * Return:void.
*/
void free_grid(int **grid, int height)
{
	int iterador = 0;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	while (iterador < height)
	{
		free(grid[iterador]);
		iterador++;
	}
	free(grid);
}
