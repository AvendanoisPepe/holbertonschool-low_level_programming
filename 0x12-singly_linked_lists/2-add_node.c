#include "lists.h"
/**
 * add_node -Agregamos un nuevo nodo al comienzo de la lista list_t
 * @head: doble puntero a la lista.
 * @str: Cadena para el nuevo nodo.
 * Return: Nueva dirección de elemento o nulo si falló
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nuevo;
	unsigned int iterador = 0;

	for (; str[iterador]; iterador++)
		;

	nuevo = malloc(sizeof(list_t));
	if (nuevo == NULL)
	{
		return (NULL);
	}

	nuevo->str = strdup(str);
	nuevo->len = iterador;
	nuevo->next = *head;
	*head = nuevo;

	return (*head);
}
