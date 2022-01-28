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

	for (; index < ht->size; index++)
	{
		nodo = ht->array[index];
		while (nodo != NULL)
		{
			temporal = nodo;
			nodo = nodo->next;
			free(temporal->value);
			free(temporal->key);
			free(temporal);
			}
	}
	free(ht->array);
	free(ht);
}
