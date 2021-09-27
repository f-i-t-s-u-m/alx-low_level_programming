#include <stdio.h>
#include "dog.h"
/**
 *init_dog - get the function
 *@d: struct dog
 *@name: get the name
 *@age: get dog age
 *@owner: get owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
