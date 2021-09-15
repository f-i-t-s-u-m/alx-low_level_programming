#include "main.h"

/**
 *_strlen_recursion - function start
 *@s: pointer;
 *Return: strlength
 */
int _strlen_recursion(char *s)
{
if (*(s) == '\0')
{
return (0);
}
return (1 + _strlen_recursion(&*(s + 1)));
}
