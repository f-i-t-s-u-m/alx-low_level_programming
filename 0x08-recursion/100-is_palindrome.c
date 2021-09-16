#include "main.h"
#include "2-strlen_recursion.c"
/**
 * palindrome_checker - compares the first letter with the last letter of
 * a string
 * @s: is the string array
 * @l: is the length of the array to access the last element/letter
 * Return: 1 if all checker pass the test, or 0 other wise
 */
int palindrome_checker(char *s, int l)
{
	if (l < 1)
		return (1);
	if (*s == *(s + l))
		return (palindrome_checker(s + 1, l - 2));
	return (0);
}
/**
 * is_palindrome - checks if the word is or not a palindrom
 * @s: string input
 * Return: recursively
 *
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (palindrome_checker(s, len - 1));
}
