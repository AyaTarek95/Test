#include "dog.h"
/**
 *
 *
 */
void print_dog(struct dog *d)
{
		if (d->name == 0 || d->age == 0 || d->owner ==0)
			printf("(nil)");

	if (d == NULL)
		printf(" ");

	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
}	printf("Owner: %s\n", d->owner);
}
