#include "main.h"
/**
 *print_binary - a function that prints the binary
 *@n: a number;
 *Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 1;
	int a = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	i <<= 63;
	while (i > 0)
	{
		if ((n & i) == 0 && a == 1)
			_putchar('0');
		else if ((n & i) != 0)
		{
			_putchar('1');
			a = 1;
		}
		i >>= 1;

	}

}
