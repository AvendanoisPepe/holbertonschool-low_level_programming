#include "hash_tables.h"
/**
 * hash_table_delete - Libera la tabla hash
 *
 * @ht: Tabla a liberar
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temporal, *nodo;
	unsigned long int index = 0;

	if (ht == NULL)
		return;

	for (; index < ht->size; index++)
	{
		temporal = ht->array[index];
		while (temporal)
		{
			free(temporal->key);
			free(temporal->value);
			free(temporal);
			temporal = temporal->next;
		}
		free(temporal);
	}
	free(ht->array);
	free(ht);
}
