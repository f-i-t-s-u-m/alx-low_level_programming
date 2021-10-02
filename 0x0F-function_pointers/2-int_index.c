#include "function_pointers.h"
/**
 *int_index - function to call f function
 *@array: array of int
 *@size: size of aaray
 *@cmp: function to a pointer to compare values
 *Return: index of match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	i++;
	}
	return (-1);
}
