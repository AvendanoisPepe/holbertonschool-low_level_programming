#include "lists.h"
/**
 * add_nodeint -Agregamos un nuevo nodo al comienzo de listint_t.
 * @head: Puntero al primer nodo de listint_t.
 * @n: Nuevos datos para ese nodo.
 * Return: DIreccion de ese nodo o null si no funciona.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nuevo;

	if (head == NULL)
	{
		return (NULL);
	}

	nuevo = malloc(sizeof(listint_t));

	if (nuevo != NULL)
	{
		nuevo->n = n;
		nuevo->next = *head;
		*head = nuevo;
		return (nuevo);
	}
	else
	{
		return (NULL);
	}
}
