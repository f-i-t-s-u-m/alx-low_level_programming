#include <stdio.h>
/**
 * main - just here c++
 *Return: just say okay
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; ++alphabet)
	{
	if (alphabet != 'q' && alphabet != 'c')
	{
	putchar(alphabet);
	}
	}
	putchar('\n');
	return (0);
}
