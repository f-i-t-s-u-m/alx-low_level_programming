#include <stdio.h>
#include <math.h>
/**
 *binary_search - searches for a value in a sorted array
 *@array: list of sorted elements
 *@size: size of array
 *@value: value to search for
 *Return: integer
 */

int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = (int)size, m, i;

	if (!size || !array)
	{
		return (-1);
	}
	while (l < r)
	{
		printf("Searching in array: ");
		
		i = l;
		while (i < r)
		{
			printf("%d", array[i]);
			if (i == r - 1)
			{
				printf("\n");
			}
			else 
			{
				printf(", ");
			}
			i++;
		}

		m = floor((l + r) / 2);
		if (array[m] < value)
		{
			l = r + 1;
		}
		else 
		{
			r = m;
		}
	
	}

	return (l - 1);
}
