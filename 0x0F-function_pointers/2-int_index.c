#include "function_pointers.h"
/**
 *array_iterator - function to call f function
 *@array: array of int
 *@size: size of aaray
 *@action: function pointer
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if(size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if(cmp(array[i]))
		{
		  return (i);	
		}
	i++;
	}
	return (-1);
}
