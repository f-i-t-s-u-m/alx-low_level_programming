#include <stdio.h>
#include "dog.h"
#include <math.h>
/**
 *print_dog - get the function
 *@d: struct dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (%s)\n", "nil");
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (%s)\n", "nill");
	}
}
