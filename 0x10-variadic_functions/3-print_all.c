#include "variadic_functions.h"
#include <stdio.h>
/**
 *
 *
 *
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int a = 0;
	
	va_start(list, format);
	while(*(format+a))
	{
		int sep = 0;
		char *str;
		switch(*(format+a)) 
		{
		case 'c':
			printf("%c", va_arg(list, int));
			sep = 1;
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			sep = 1;
			break;
		case 'f':
			printf("%e", va_arg(list, double));
			sep = 1;
			break;
		case 's':
			str = va_arg(list, char *);
			printf("%s", str != NULL ? str : "(nil)");
			sep = 1;
			break;
		}
		 if(sep == 1 && *(format + (a + 1)))
		 {
			 printf("%s", ", ");
		 }
		a++;


	}
	va_end(list);
	printf("\n");
}
