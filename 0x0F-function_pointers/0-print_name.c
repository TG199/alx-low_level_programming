#include "function_pointers.h"

/**
 * print_name - print name
 * @name:first arg
 * @f: pointer to function
 *
 * Description: this function prints the name passed as argument
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
