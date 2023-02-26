#include <stdio.h>




int main(void)
{
	char i = '0';
	char j = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (j <= 'f')
	{
		putchar(j);
		j++;
	} putchar('\n');
	return (0);
}
