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
	char *char_dest = (char *) dest;
	char *char_src = (char *) src;
	unsigned int i = 0;

	while (i != n)
	{
		char_dest[i] = char_src[i];
		i++;
	} return (dest);
}
