#include "main.h"

/**
 * print_alphabet_x10 - Entry point.
 *
 * Description: This program prints out
 * lowercase alphabet 10x.
 * Return: 0;
 */
void print_alphabet(void)
{
	char ch[27] = "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z";
	int r = 0;

	while (r <= 10)
	{
		_putchar(ch);
		ch++;
	}

