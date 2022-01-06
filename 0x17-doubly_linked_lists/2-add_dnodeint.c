#include "lists.h"
/**
 * add_dnodeint - Agrega un nuevo nodo a la lista.
 * @head: doble puntero a la lista
 * @n: datos del nuevo nodo
 * Return: nuevo nodo
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nuevo = NULL;

	nuevo = malloc(sizeof(dlistint_t));
	if (nuevo != NULL)
	{
		nuevo->n = n;
		nuevo->prev = NULL;
		if (*head)
		{
			(*head)->prev = nuevo;
		}
		nuevo->next = *head;
		*head = nuevo;
	}
	return (nuevo);
}
