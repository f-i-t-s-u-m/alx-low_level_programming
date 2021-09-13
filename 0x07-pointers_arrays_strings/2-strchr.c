#include "main.h"
#include <stddef.h>
/**
 *_strchr - function start here
 *Return: array
 * @s: array
 * @c: char
 */
char *_strchr(char *s, char c)
{
unsigned int i;
char *null = NULL;

for (i = 0; s[i] != '\0'; i++)
{
if (*(s + i) == c)
{
return (s + i);
}
}
if (*(s + i) == 0)
{
return (s + i);
}
else
{
return (null);
}
}
