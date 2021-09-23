#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - function to allocate space
 *@b: size of memory
 *Return: pointer to new created space
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(93);
	}
	return (ptr);
}
