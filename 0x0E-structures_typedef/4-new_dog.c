#include "dog.h"
#include <stdlib.h>
/**
 * longi - calculo la longitud de una cadena.
 * @lon:cadena
 * Return: Longitud de la cadena lon.
*/
int longi(char *lon)
{
	int iterador;

	for (iterador = 0; *lon != '\0'; iterador++)
	{
		lon++;
	}
	return (iterador);
}
/**
 * *_cop-copia la cadena de src al puntero dest, incluido el final
  * datos nulos.
 *@dest:puntero al que copiamos la cadena.
 *@src:cadena a copiar.
 *Return:puntero dest.
*/
char *_cop(char *dest, char *src)
{

	int variable;

	int variable2 = 0;

	for (variable = 0; src[variable] != '\0'; variable++)
	{
	}

	while (variable2 < variable)
	{
		dest[variable2] = src[variable2];
		variable2++;
	}
	dest[variable2] = '\0';

	return (dest);
}
/**
 * new_dog - Creamos un perro nuevo tomando de base las dos
 * funciones anteriores.
 * @name: Nombre del nuevo perro.
 * @age: Edad del nuevo perro,
 * @owner: Dueño del perro.
 * Return: Puntero al nuevo perro creado.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		return (NULL);
	}
	(*new).age = age;
	(*new).name = malloc(sizeof(char) * (longi(name) + 1));
	if ((*new).name == NULL)
	{
		free(new);
		return (NULL);
	}
	_cop((*new).name, name);
	(*new).owner = malloc(sizeof(char) * (longi(owner) + 1));
	if ((*new).owner == NULL)
	{
		free((*new).name);
		free(new);
		return (NULL);
	}
	_cop((*new).owner, owner);
	return (new);
}
