#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the contents of a struct dog
 * @d: pointer to the struct dog to print
 *
 * Description: Prints name, age, and owner.  
 *              If any element is NULL, prints (nil).  
 *              If d is NULL, does nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.2f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
