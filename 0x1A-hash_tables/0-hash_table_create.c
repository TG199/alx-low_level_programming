#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of array
 *
 * Return: new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = calloc(ht->size, sizeof(hash_node_t *));
	if (ht->array == NULL)
		return (NULL);

	i = 0;
	while (i < ht->size)
	{
		ht->array[i] = NULL;
		i++;
	}

	return (ht);
}
