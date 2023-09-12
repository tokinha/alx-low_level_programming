#include "dog.h"

/**
 * init_dog - initializes a dog
 * @d: dog init
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
