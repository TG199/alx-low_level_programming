#include "main.h"

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
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		s++;
	} return ('\0');
}
