#include "main.h"
/**
 *is_prime_number - main function
 *@n : int
 *Return: t or f
 */
int is_prime_number(int n)

{
if (n < 2)
{
return (0);
}
return (check_p(n, 2));
}

/**
 *check_p - second main
 *@a:int
 *@b: int
 *Return: int
 */

int check_p(int a, int b)
{
if (b <= 9)
{
if (a % b == 0)
{
return (0);
}
else
{
check_p(a, ++b);
}
}
return (1);
}
