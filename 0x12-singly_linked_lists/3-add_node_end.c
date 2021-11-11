#include "lists.h"
/**
 *add_node_end -Agrega un nodo nuevo al final de la lista.
 *  @head:Puntero doble a la lista.
 * @str:Cadena a insertar .
 * Return:nuevo.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nuevo;
	list_t *Temporal = *head;
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
	nuevo->next = NULL;

	if (*head == NULL)
	{
		*head  = nuevo;
		return (nuevo);
	}

	while (Temporal->next)
	{
		Temporal = Temporal->next;
	}

	Temporal->next = nuevo;

	return (nuevo);
}
