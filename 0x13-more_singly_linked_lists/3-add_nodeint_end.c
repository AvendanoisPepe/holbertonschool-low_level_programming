#include "lists.h"
/**
 * add_nodeint_end - Agrega un nodo al final de listint_t.
 * @head: Puntero a la primera posicion de listint_t.
 * @n:Datos para el nuevo nodo.
 * Return: Puntero al nuevo nodo o null si no funciona.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nuevo;
	listint_t *Temporal = *head;

	nuevo = malloc(sizeof(listint_t));
	if (nuevo == NULL)
	{
		return (NULL);
	}

	nuevo->n = n;
	nuevo->next = NULL;

	if (*head == NULL)
	{
		*head = nuevo;
		return (nuevo);
	}

	while (Temporal->next)
	{
		Temporal = Temporal->next;
	}

	Temporal->next = nuevo;

	return (nuevo);
}
