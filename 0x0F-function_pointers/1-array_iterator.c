#include "function_pointers.h"
/**
 *array_iterator - function to call f function
 *@array: array of int
 *@size: size of aaray
 *@action: function pointer
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;
	while (i < size)
	{
	action(array[i]);
	i++;
	}
}
