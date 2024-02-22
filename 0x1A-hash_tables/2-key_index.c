#include "hash_tables.h"

/**
 * key_index - Gives the index of  key
 * @key: key
 * @size: size
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (key == NULL)
		return (0);

	index = hash_djb2(key) % size;

	return (index);
}
