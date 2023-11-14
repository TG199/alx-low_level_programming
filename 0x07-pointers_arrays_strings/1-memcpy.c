#include "main.h"

/**
 * _memcpy - copy address
 * @dest: destnation
 * @src: source
 * @n: number of bytes to copy
 *
 * Description: This function copies a block of memory to
 * another block of memory
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i != n; i++)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
