#include "main.h"

/**
 * _islower - Print lowercase
 * @c: letter to print
 *
 * Description: This function checks for lowercase letters
 * Return: 0;
 */
int _islower(int c)
{
	int a = 'a';

	while (a <= 'z')
	{
		if (c == a)
		{
			return (1);
		}
		a++;
	} return (0);
}

