#include "main.h"
/**
 * _strncat - start here
 * Return:pinter
 * @dest: char
 * @src: char
 * @n: int
*/

char *_strncat(char *dest, char *src, int n)
{
int j = 0, i;

while (dest[j] != '\0')
{
j++;
}
for (i = 0; i < n; ++i)
{
dest[j + i] = src[i];
}

return (dest);
}
