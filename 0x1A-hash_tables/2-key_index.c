#include "hash_tables.h"


/**
 * key_index - Gives you key index
 * @key: key
 * @size: array size of hash table
 *
 * Return:index to store key/value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	hash = hash_djb2(key);

	index = hash % size;
	return index;
}

