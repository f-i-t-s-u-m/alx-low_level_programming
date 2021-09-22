#include "main.h"
/**
 * _strcat - start here
 * Return:pinter
 * @dest: char
 * @src: char
*/

char *_strcat(char *dest, char *src)
{
int j = 0, i;

while (dest[j] != '\0')
{
j++;
}
for (i = 0; src[i] != '\0'; i++)
{
dest[j + i] = src[i];
}

return (dest);
}
