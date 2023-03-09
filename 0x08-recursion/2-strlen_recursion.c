#include "main.h"

/**
 * _strlen_recursion - Find length of string
 * @s: string to print
 *
 * Description: This function prints the length of
 * string using recursions
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length++;
	return (length +_strlen_recursion(s + length));
	} return (length);
}
