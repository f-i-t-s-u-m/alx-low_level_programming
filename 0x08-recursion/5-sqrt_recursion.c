#include "main.h"
/**
 * natural_root - function for natural
 * @n: given int
 * @root: possible root
 * Return: -1 if no possible root, or its natural square root
 */

int natural_root(int n, int root)
{
	if (n == root * root)
	{
		return (root);
	}
	if (n < root * root)
	{
		return (-1);
	}
	return (natural_root(n, ++root));
}

/**
 * _sqrt_recursion - return square root
 * @n: given int
 * Return: -1 if n < 0
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural_root(n, 0));
}
