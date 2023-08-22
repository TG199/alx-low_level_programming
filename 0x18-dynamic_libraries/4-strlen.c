#include "main.h"

/**
 * _strlen - Return length of string
 * @s: string parameter
 *
 * Description:This function prints the length of string.
 * Return: 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	length++;
	return (length);
}

