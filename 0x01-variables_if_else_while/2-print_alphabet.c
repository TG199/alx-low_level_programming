#include <stdio.h>

/**
  * main - Entry point of program
  *
  * Description: This program prints all alphabet
  * in lowercase letters.
  * Return: 0 (Success).
  */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch = ch + 1;
	} putchar('\n');
	return (0);
}
