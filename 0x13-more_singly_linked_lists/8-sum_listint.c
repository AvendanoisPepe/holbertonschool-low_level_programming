#include "lists.h"
/**
 * sum_listint - Suma todos los datos(n) de la lista listint_t.
 * @head: Puntero a la lista listint_t;
 * Return:Si falla es 0 si no el resultado de la suma.
 */
int sum_listint(listint_t *head)
{
	int sumita = 0;

	while (head)
	{
		if (head == NULL)
		{
			return (0);
		}
		sumita = sumita + head->n;
		head = head->next;
	}
	return (sumita);
}
