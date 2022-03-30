#include <stdio.h>
/**
 * main - run main 
 * @array: array of lists
 * @size_t: size of the array,
 * @value: int value
 * Return: integer
 */

int linear_search(int *array, size_t size, int value) {
	
	int i = 0;

	if (!value || !array) {
		return (-1);
	}

	while(i < (int)size) {
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value) {
			return i;
		}
		i++;
	}
	return (-1);
}
