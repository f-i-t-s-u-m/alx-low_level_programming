#include "main.h"
/**
 * _strncpy - start here
 * Return:pinter
 * @dest: char
 * @src: char
 * @n: int
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; src[i] != '\0' && i < n; ++i)
{
dest[i] = src[i];
}

return (dest);
}
