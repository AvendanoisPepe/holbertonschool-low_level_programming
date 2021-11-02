#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Inicializa la estructura creada en el punto 0.
 * @d:Puntero a la estructura.
 * @name:nombre del perro.
 * @age:edad del perro.
 * @owner:dueño del perro.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
