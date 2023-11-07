#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Frees the memory allocated for a dog structure.
 * @d: A pointer to a struct dog.
 */
void free_dog(dog_t *d)
{
if (d == NULL)
{
return;
}
if (d->name != NULL)
{
free(d->name);
}
if (d->owner != NULL)
{
free(d->owner);
}
free(d);
}
