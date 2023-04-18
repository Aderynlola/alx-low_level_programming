#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: argument 1
 * @name: argument 2
 * @age: argument 3
 * @owner: argument 4
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
