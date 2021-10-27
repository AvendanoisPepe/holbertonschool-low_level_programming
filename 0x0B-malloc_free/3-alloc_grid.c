#include "main.h"
#include <stdlib.h>
/**
 * *alloc_grid-Creamos una cuadricula de 2 dimenciones con malloc
 * @width:Ancho de la cuadricula.
 * @height:alto de la cuadricula,
 * Return:Puntero a cuadricula.
*/
int **alloc_grid(int width, int height)
{
	int **guardarT;
	int iterador;
	int iterador2;

	if (width <= 0 || height <= 0)
		return (NULL);

	guardarT = malloc(sizeof(int *) * height);

	if (guardarT == NULL)
		return (NULL);

	for (iterador = 0; iterador < height; iterador++)
	{
		guardarT[iterador] = malloc(sizeof(int *) * width);

		if (guardarT[iterador] == NULL)
		{
			for (; iterador >= 0; iterador--)
			{
				free(guardarT[iterador]);
			}
			free(guardarT);
			return (NULL);
		}

		for (iterador2 = 0; iterador2 <  width; iterador2++)
		{
			guardarT[iterador][iterador2] = 0;
		}
	}
	return (guardarT);
}
