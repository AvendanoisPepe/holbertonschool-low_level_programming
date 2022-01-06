#include "lists.h"
/**
 * sum_dlistint - suma de todos los datos de la lista.
 * @head: puntero a la lista.
 * Return: suma de los datos.
 */
int sum_dlistint(dlistint_t *head)
{
	int sumita = 0;

	if (!head)
	{
		return (0);
	}

	while (head)
	{
		sumita += head->n;
		head = head->next;
	}
	return (sumita);
}
