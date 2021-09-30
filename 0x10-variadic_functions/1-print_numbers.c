#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_numbers - print numbers function
 *@separator: print separator
 *@n: size of arg
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;

	va_start(list, n);
	while (i < n)
	{
		printf("%d", va_arg(list, int));
		if (separator[0] != '\0' && i + 1 < n)
		printf("%c ", separator[0]);
		i++;
	}
	va_end(list);
	printf("%c", '\n');
}
