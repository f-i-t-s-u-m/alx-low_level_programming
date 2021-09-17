#include <stdio.h>
#include <stdlib.h>
/**
 *main - function starting point
 *@argc: arg length
 *@argv: array of agr
 *Return: int
 */
int main(int argc, char *argv[])
{
	int i, m = 1;

	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	for (i = 1; i < argc; ++i)
	{
	m = m * atoi(argv[i]);
	}
	printf("%d\n", m);
}
