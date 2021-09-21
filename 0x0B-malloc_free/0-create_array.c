#include "main.h"
#include <stdlib.h>
/**
 *create_array - function start here
 *@size: len to array
 *@c: char to insert
 *Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = (char *)malloc(size);

	for (i = 0; i < size; i++)
	ptr[i] = c;
	return (ptr);
}
