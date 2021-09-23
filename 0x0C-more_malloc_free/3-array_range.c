#include "main.h"
#include <stdlib.h>
/**
 **array_range- function min and max
 *@min:  min int
 *@max: max int
 *Return: address
 */
int *array_range(int min, int max)
{
	int a;
	int *ptr;

	if (min > max)
	{
	return (NULL);
	}
	ptr = malloc(sizeof(ptr) * max);
	if (ptr == NULL)
		return (NULL);
	for (a = min ; a <= max; a++)
	{
		ptr[a] = a;
	}
	return (ptr);
}
