#include "main.h"
/**
 *_memset - function start here
 *Return: array
 * @s: array
 * @b: char
 * @n: int
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
