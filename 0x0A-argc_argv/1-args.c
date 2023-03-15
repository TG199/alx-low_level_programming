#include "main.h"

/**
 * main - print number of args
 * @argc: number of args
 * @argv: NULL
 *
 * Description: This functio prints the nmber of args
 * passed into it
 * Return: 0;
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n",argc - 1);
	return (0);
}
