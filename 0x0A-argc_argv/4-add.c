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
	int i, m = 0;

	if (argc < 1)
	{
		printf("%d\n", 0);
		return (1);
	}
	for (i = 1; i < argc; i++)
	{

	if (argv[i][0] != '0' && atoi(argv[i]) == 0)
	{
	printf("%s\n", "Error");
	return (1);
	}
	m = m + atoi(argv[i]);
	}
	printf("%d\n", m);
	return (0);
}
