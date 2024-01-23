#include <dog.h>

/**
 *struct dog - a dog struct
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 *Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->onwer = owner;


}
