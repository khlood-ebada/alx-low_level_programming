#include <dog.h>
#include <stdio.h>

/**
 *print_dog - prints a dog
 *@d: dog to print
 *Return: void
 */

void print_dog(struct gog *d)
{
	printf("Name is %s\n", d->name ? d->name : "(nil)");
	printf("Age is %f\n", d->age);
	printf("Owner is %s\n", d->owner ? d->owner : "(nil)");
}
