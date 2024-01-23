#include <dog.h>

/**
 *init dog - a dog initalization
 *@d: dog to init
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
