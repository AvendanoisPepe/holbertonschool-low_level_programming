#include "hash_tables.h"
/**
 * key_index - Devuleve el indice de una clave
 *
 * @key: Clave.
 * @size: Tamaño de la matrix de indices.
 * Return: índice en el que se encuentra el par clave/
 * valor donde debe almacenarse en la matriz de la tabla hash
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
