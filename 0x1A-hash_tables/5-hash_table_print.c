#include "hash_tables.h"
/**
 * hash_table_print - Imprime la tabla hash
 *
 * @ht: La tabla hash a imprimir.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temporal = NULL;
	unsigned long int index = 0;
	char *coma = "";

	if (ht)
	{
		printf("{");
		while (index < ht->size)
		{
			temporal = ht->array[index];
			while (temporal)
			{
				printf("%s", coma);
				coma = ", ";
				if (temporal->key)
				{
					printf("'%s': '%s'", temporal->key, temporal->value);
				}
				temporal = temporal->next;
			}
			index++;
		}
		printf("}\n");
	}
}
