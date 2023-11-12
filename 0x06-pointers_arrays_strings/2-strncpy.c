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
	int i = 0, j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
