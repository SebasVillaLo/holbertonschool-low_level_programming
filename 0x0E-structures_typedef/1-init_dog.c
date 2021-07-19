#include <stdio.h>
#include "dog.h"
/**
 * init_dog - prototipo
 * @d: struct
 * @name: nombre
 * @age: edad
 * @awner: propietario
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
