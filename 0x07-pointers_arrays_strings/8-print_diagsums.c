#include "main.h"
#include <stdio.h>
/**
*print_diagsums - function start here
*@a: pointer
*@size: integer
*Return: void
*/

void print_diagsums(int *a, int size)
{
int j, k, rightSum = 0, leftSum = 0;

for (j = 0; j < (size * size); j += (size + 1))
rightSum += *(a + j);

for (k = (size - 1); k < ((size * size) - 1); k += (size - 1))
leftSum += *(a + k);

printf("%d, %d\n", rightSum, leftSum);
}
