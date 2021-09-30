#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_strings - function that orints string followed by a new line
 *@separator: is the string to be printed between the strings
 *@n: size of the string to be passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;

	va_start(list, n);
	while (i < n)
	{
		printf("%s", va_arg(list, const char *));
		if (separator[0] != '\0' && (i + 1) < n)
		printf("%c ", separator[0]);
		i++;
	}
	va_end(list);
	printf("%c", '\n');
}
