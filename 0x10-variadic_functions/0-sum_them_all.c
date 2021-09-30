#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - function to sum all args
 *@n: size of arg
 *Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int sum = 0;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
