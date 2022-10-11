#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f", d->age);
		if (!(d->owner))
			printf("Owner: %s\n", d->owner);
	}
}
