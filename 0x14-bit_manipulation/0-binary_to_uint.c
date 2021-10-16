#include "main.h"
/**
 * _strrev - function to rev string
 * @str: string to rev
 * Return: pointer to str
 */
char *_strrev(const char *str)
{
	int len = 0, start = 0, end;
	char *ptr = malloc(sizeof(*str));

	if (ptr == NULL)
		return (NULL);
	while (str[len])
		len++;
	end = len - 1;
	for (; start < len; start++)
	{
		ptr[start] = str[end];
		end--;
	}
	return (ptr);
}
/**
 *binary_to_uint -a func that convert binary
 *@b: pointer to binary
 *Return: converted unsigned number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, n = 1, val = 0;
	char *newptr = malloc(sizeof(_strrev(b)));

	newptr = _strrev(b);
	if (newptr == NULL || b == NULL)
		return (0);
	while (newptr[i])
	{
		if (newptr[i] == 48 || newptr[i] == 49)
		{
			if (newptr[i] == 49)
				val += n;
		}
		else
			return (0);
		i++;
		n = n * 2;
	}
	return (val);
}
