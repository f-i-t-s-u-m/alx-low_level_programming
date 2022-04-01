#include <stdio.h>
#include <math.h>

/**
 * jump_search - search value using jump search
 * @array: list of array
 * @size: size of the array
 * @value: value to search for
 * Return - int
 */

 int jump_search(int *array, size_t size, int value)
 {
	int k = 0, i = 0, e;
	
	while(i < (int)size)
	{
		
		if (array[i] > value || array[i] == value)
		{
			k = i - 3;
			break;
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		k = i;
		i+= 3;
	}
		
	printf("Value found between indexes [%d] and [%d]\n", k, i);
	e = k + 3;
	while (k <= e)
	{
		printf("Value checked array[%d] = [%d]\n", k, array[k]);
		if (!array[e + 1])
		{
			break;
		}
		else if (value == array[k])
		{
			return (k);
			break;
		}
		k++;
	}		
	return (-1);
 }
