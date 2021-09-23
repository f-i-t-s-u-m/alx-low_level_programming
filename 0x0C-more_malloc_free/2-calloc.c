#include "main.h"
#include <stdlib.h>
/**
 *_calloc- function to assign space on memory
 *@nmemb:int
 *@size:int
 *Return: address
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	int *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(ptr) * (size * nmemb));
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < (size * nmemb); a++)
	{
		ptr[a] = 0;
	}
	return (ptr);
}
