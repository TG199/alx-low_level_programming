#include "main.h"





void print_square(int size)
{
	int width = 1;
	int height = 1;



	while (width <= size)
	{
		while (height <= size)
		{
			if (size <= 0)
			{
				_putchar('\n');
			}
			else
			{
				_putchar('#');

			}
			height++;
		}
		_putchar('\n');
		width++;
	}
}
