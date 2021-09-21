#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - function
 *@width: width of grid
 *@height: height of grid
 *Return: pointer address
 */
int **alloc_grid(int width, int height)
{
	int i, j, **ptr;

	ptr = (int **)malloc(sizeof(*ptr) * height);
	if (ptr == NULL)
		return (NULL);
	if (width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(sizeof(ptr) * width);
		if (ptr[i] == NULL)
		{
		while (--i)
		free(ptr[i]);
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
