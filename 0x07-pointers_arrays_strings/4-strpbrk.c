#include "main.h"
#include <stddef.h>
/**
 *_strpbrk - get in
 *@s: array
 *@accept: array
 *Return: int
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int n = 0;
char *null = NULL;
while (s[n])
{
int a;

for (a = 0; accept[a] != '\0'; a++)
{
if (accept[a] == s[n])
{
return (s + n);
}
}
n++;
}
return (null);
}
