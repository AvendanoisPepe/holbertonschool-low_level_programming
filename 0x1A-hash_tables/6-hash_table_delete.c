#include "hash_tables.h"
/**
 * hash_table_delete - Libera la tabla hash
 *
 * @ht: Tabla a liberar
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = tmp->next;
		}
		free(tmp);
	}
	free(ht->array);
	free(ht);
}
