#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Imprime una estructura sobre datos de un perro.
 * @d:Puntero a la estructura.
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nill)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nill)";
	}
	if (d->age != 0)
	{
		
	}
	
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
