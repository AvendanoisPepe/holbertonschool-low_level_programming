#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Libero la memoria asignada para la estructura del perro.
 * @d: estructura a liberar.
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
