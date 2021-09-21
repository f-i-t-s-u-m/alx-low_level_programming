#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function start here
 *@str: string
 *Return: char
 */
char *_strdup(char *str)
{

	unsigned int i;
	char *ptr = (char *)malloc(sizeof(str));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	return (ptr);
}
