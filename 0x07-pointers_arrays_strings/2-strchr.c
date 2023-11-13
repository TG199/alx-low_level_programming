#include "main.h"
#include <stddef.h>
/**
 * _strchr - return character
 * @s: string of characters
 * @c: character to return
 *
 * Description: This function return the first occurance
 * of a character in a string
 * Return: c
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
