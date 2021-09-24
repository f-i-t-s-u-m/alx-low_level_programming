#include <stdio.h>
#include <stdlib.h>

int cnn(char **str)
{
 int i = 1;

 	while(str[i])
	{
		int z = 0;
		while(str[i][z])
		{
			if(str[i][z] >= 47 && str[i][z] <= 57)
			;
			else
			{
			printf("%s\n", "Error");
			exit(98);
			}
			z++;
		}
		i++;
	}
	return (0);

}

int main(int argc, char *argv[])
{
	int sum = 0;
	if(argc != 3)
	{
		printf("\n%s\n", "Error");
		exit(98);
	}
	else if(cnn(argv) == 0)
	{
		sum = atoi(argv[1]) + atoi(argv[2]);
		printf("%d\n", atoi(argv[1]) + atoi(argv[2]));	
	}

	return (sum);
}
