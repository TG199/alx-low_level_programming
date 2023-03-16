#include "main.h"

/**
 * main - Entry point
 * @argc: number
 * @argv: string
 *
 * Description: This function prints all args it receives
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	} return (0);
}
