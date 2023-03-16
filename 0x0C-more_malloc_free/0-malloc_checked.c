#include "main.h"

/**
 * malloc_checked - allocates memoery using malloc
 * @b: number
 *
 * Descirption: This function allocates memory
 * using malloc
 * Return: ptr.
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr  == NULL)
	{
		exit(98);
	} return (ptr);
}
