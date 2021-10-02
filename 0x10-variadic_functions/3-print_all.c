#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - function that print all types
 *@format: format type
 *
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int a = 0;
	char *str, *sep = "";

	va_start(list, format);
	while (*(format + a))
	{
		switch (*(format + a))
		{
		case 'c':
			printf("%s%c", sep, va_arg(list, int));
			break;
		case 'i':
			printf("%s%d", sep, va_arg(list, int));
			break;
		case 'f':
			printf("%s%f", sep, va_arg(list, double));
			break;
		case 's':
			str = va_arg(list, char *);
			printf("%s%s", sep, str != NULL ? str : "(nil)");
			break;
		default:
			a++;
			continue;
		}
		sep = ", ";
		a++;
	}
	va_end(list);
	printf("\n");
}
