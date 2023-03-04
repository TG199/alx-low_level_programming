#include "main.h"

/**
 * _strcat - concatenate 2 strings
 * @dest: String to append to
 * @src:string to append
 *
 * Description: This function appends the source string
 * to the destination string.
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
