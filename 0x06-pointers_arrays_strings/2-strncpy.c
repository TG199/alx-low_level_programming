#include "main.h"

/**
 * _strncpy - copy string
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: number of char to copy
 *
 * Description: This function copies n number of bytes from destination
 * to string
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
