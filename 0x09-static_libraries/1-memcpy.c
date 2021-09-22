#include "main.h"
/**
 *_memcpy - function start here
 *Return: array
 * @dest: array
 * @src: array
 * @n: int
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
