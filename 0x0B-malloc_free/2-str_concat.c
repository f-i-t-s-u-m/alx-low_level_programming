#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _stlen - function start here
 *@s: string
 *Return: number of char
 */
int _stlen(char *s)
{
	int a = 0;

	while (s[a])
		a++;
	return (a);
}

/**
*str_concat - function start here
*@s1: string
*@s2: string
*Return: char
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ptr = (char *)malloc(_stlen(s1) + _stlen(s2) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		ptr[i] = s2[j];
	}
	if (ptr[i] == '\0')
	{
		ptr[i + 1] = '\0';
	}
	return (ptr);
}
