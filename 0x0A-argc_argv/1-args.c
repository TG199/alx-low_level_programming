#include "main.h"

/**
 * main - print number of args
 * @argc: number of args
 *
 * Description: This functio prints the nmber of args
 * passed into it
 */
int main(int argc, char *argv[])
{
	argv[0] = NULL;
	printf("%d\n", argc);
	return (0);
}
