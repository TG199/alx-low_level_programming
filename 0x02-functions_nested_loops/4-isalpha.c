#include "main.h"

/**
 * _isalpha - check for alphabet
 * @c: alphabet to check
 *
 * Description: This function checks for alphabetic characters
 * Return: 0
 */
int _isalpha(int c)
{
	int a = 'a';
	int A = 'A';

	while (a <= 'z')
	{
		if (c == a)
		{
			return (1);
		} a++;
	}
	while (A <= 'Z')
	{
		if (c == A)
		{
			return (1);
		} A++;
	} return (0);
}

