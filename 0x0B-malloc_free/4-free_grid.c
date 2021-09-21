#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *free_grid - function
 *@grid: pointer
 *@height: height of grid
 *Return: Void
 */
void free_grid(int **grid, int height)
{
	int  j;

	for (j = 0; j < height; j++)
	free(grid[j]);
	free(grid);
}
