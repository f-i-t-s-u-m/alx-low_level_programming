#include "main.h"
#include <stdio.h>
/**
 *print_binary - a function that prints the binary
 *@n: a number;
 *Return: void
 */
void print_binary(unsigned long int n)
{
	int mul = 1, c = n, len = 0, t, p = 1;

	while (c > 0)
	{
		len++;
		c = c - mul;
		mul = mul * 2;
	}
	if (len == 0)
	{
		_putchar('0');
		return;
	}
	c = n;
	for (; len > 0; len--)
	{
		t = len - 1;
		while (t > 0)
		{
			p = p * 2;
			t--;
		}
		if (c == 0)
			_putchar('0');
		else if (c == p || (c > p && c < p * 2))
		{
			c = c - p;
			_putchar('1');
		}
		else
			_putchar('0');
		p = 1;
	}
}
