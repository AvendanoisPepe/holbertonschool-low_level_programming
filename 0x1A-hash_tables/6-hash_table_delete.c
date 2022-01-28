#include "hash_tables.h"
/**
 * hash_table_delete - Libera la tabla hash
 *
 * @ht: Tabla a liberar
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temporal = NULL;
	unsigned long int index = 0;

	if (ht)
	{
		while (index < ht->size)
		{
			while (ht->array[index])
			{
				temporal = ht->array[index];
				ht->array[index] = ht->array[index]->next;
				if (temporal->value)
					free(temporal->value);
				if (temporal->key)
					free(temporal->key);
				free(temporal);
			}
			free(ht->array[index]);
			index++;
		}
	}
	free(ht->array);
	free((void *)ht);
}
