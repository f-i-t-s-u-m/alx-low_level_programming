#include "main.h"
/**
 *_strspn - get in
 *@s: array
 *@accept: array
 *Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0, t = 0;
while (accept[n] != '\0')
{
int a;

for (a = 0; s[a] != 32; a++)
if (accept[n] == s[a])
{
t++;
}
}
n++;
}
return (t);
}
