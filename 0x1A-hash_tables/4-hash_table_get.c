#include "hash_tables.h"
/**
 * hash_table_get - Funcion que devuelve el valor asociado a una llave
 *
 * @ht:La tabla en la cual buscamos el valor.
 * @key: La clave que deseamos buscar
 * Return: Si funciona el valor si no null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t  *temporal = NULL;
	unsigned long int index = 0;

	if (*key == '\0' || key == NULL || ht == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	temporal = ht->array[index];
	while (temporal != NULL)
	{
		if (strcmp(temporal->key, key) == 0)
			return (temporal->value);
		temporal = temporal->next;
	}
	return (NULL);
}
