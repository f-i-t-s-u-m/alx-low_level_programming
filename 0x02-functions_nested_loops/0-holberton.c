#include "main.h"
/**
 * main - Entry block
 * Description: prints holberton on new line
 * Return: 0
 */

int main(void)
{
	char c[9] = "Holberton";

	int i = 0;

	while (i < 9)
	{
		_putchar(c[i]);
		++i;
	}
	return (0);
}
