#include "main.h"

/**
 * rev_string - print string in reverse
 * @s: character to reverse.
 *
 * Description: This function prints a string in
 * reverse.
 * Return: 0
 */
void rev_string(char *s)
{
	int length = _strlen(s);
	char temp;

	for (int i = 0; i < s['\0']; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
