#include "main.h"
#include <stdlib.h>
/**
 *_strlen- a function that return the length of length
 *@str: char to check
 *@col: int which string
 *@n: number of string to return
 *Return: number of string
 */
unsigned int _strlen(char *str, unsigned int col, unsigned int n)
{
	unsigned int i = 0;

	if (str != NULL)
	{
		while (str[i])
		i++;
		if (col == 2 && n > i)
		return (i);
		else if (col == 2 && n < i)
		return (n);
	}
	else if (str == NULL)
	return (1);
	return (i);
}
/**
 * string_nconcat- a function that concatenates two strings
 *@s1: char to concat
 *@s2: char to concat
 *@n: s2 length to use to concat
 *Return: pointer to new created space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int z = 0, i = 0;
	char *ptr = malloc(_strlen(s1, 1, n) + _strlen(s1, 1, n) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (; z < _strlen(s1, 1, n); z++)
	{
		ptr[z] = s1[z];
	}
	for (; z < _strlen(s1, 1, n) + _strlen(s2, 2, n) &&
		i < _strlen(s2, 2, n) ; z++, i++)
	{
		if (s2 != NULL)
		ptr[z] = s2[i];
		else
		ptr[z] = ' ';
	}
	ptr[z] = '\0';
	return (ptr);
}
