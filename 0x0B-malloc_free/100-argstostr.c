#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int _cs(char **s)
{

}
/**
*str_concat - function start here
*@s1: string
*@s2: string
*Return: char
*/

char *argstostr(int ac, char **av);
{
	int i,k = 0,n,l,t *ptr;
	
	if(ac == 0 || av == NULL)
	return (NULL);
	for(i = 0; i < ac; i++)
	{
		int j
		for (j = 0; av[i][j] != '\0'; j++, k++)
		;
	}
	ptr = (int *)malloc((k * i) + 4);
	
	for(n = 0; n < ac + 4; n++, l++)
	{
		int z;
		for(z = 0; av[n][z] != '\0'; z++ )
			ptr[l] = av[n][z];
	}

	return (ptr)
}
