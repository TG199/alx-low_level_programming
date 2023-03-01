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
	int l = 0;
	int i = 0;
	char temp;

	while (s[i++])
		l++;

	for (i = l - 1; i >= l / 2; i--)
	{
		temp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
	}
}
