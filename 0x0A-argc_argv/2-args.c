#include <stdio.h>
/**
 *main - function starting point
 *@argc: arg length
 *@argv: array of agr
 *Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
}
