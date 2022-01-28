#include "hash_tables.h"
/**
 * hash_table_delete - Libera la tabla hash
 *
 * @ht: Tabla a liberar
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temporal = NULL, *nodo =  NULL;
	unsigned long int index = 0;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	while (index < ht->size)
	{
		temporal = ht->array[index];
		while (temporal)
		{
			nodo = temporal->next;
			free(temporal->value);
			free(temporal->key);
			free(temporal);
			temporal = nodo;
		}
		index++;
	}
	free(temporal);
	free(nodo);
	free(ht->array);
	free(ht);
}
