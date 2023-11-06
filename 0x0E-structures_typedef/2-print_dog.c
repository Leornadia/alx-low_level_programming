#include "main.h"
#include <stdio.h>
/**
 * print_dog - Prints the elements of a dog structure.
 * @d: A pointer to a struct dog.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
