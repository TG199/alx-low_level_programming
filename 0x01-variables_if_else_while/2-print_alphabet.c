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
		printf("%c \n", ch);
		ch = ch + 1;
	} return (0);
}
