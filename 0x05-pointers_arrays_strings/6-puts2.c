#include "main.h"

/**
	* puts2 - updates the value it points to to 98.
	* @str: a variable as referencia
	* followed by a new line.
	* Return: none.
	*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != 0 ; i++)
	{
		if (i % 2 == 0)
		_putchar(str[i]);
	}
_putchar('\n');
}
