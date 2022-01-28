#include "hash_tables.h"
/**
 * hash_table_set - Agrega un nuevo elemento a la tabla hash
 *
 * @ht: Puntero a la tabla hash
 * @key: Clave para acceder a la posicion del arreglo
 * @value: valor del nuevo nodo
 * Return: 1 si funcion 0 si falla
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nuevo = NULL, *temporal = NULL;
	unsigned long int index;

	if (value == NULL || key == NULL || ht == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	temporal = ht->array[index];
	while (temporal != NULL)
	{
		if (strcmp(temporal->key, key) == 0)
		{
			free(temporal->value);
			temporal->value = strdup(value);
			if (temporal->value != NULL)
				return (1);
			return (0);
		}
		temporal = temporal->next;
	}
	nuevo = malloc(sizeof(hash_node_t));
	if (nuevo == NULL)
		return (0);
	nuevo->key = strdup(key);
	nuevo->value = strdup(value);
	if (nuevo->key == NULL)
	{
		free(nuevo);
		return (0);
	}
	if (nuevo->value == NULL)
	{
		free(nuevo);
		return (0);
	}
	nuevo->next = ht->array[index];
	ht->array[index] = nuevo;
	return (1);
}
