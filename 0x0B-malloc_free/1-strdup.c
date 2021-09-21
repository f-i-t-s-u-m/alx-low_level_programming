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
* _strdup - function start here
*@str: string
*Return: char
*/

char *_strdup(char *str)
{

	unsigned int i;
	char *ptr;

	if (str == NULL)
		return (NULL);
	ptr = (char *)malloc(_stlen(str) + 1);	
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	if (ptr[i] == '\0')
	{
		ptr[i + 1] = '\0';
	}
	return (ptr);
}
