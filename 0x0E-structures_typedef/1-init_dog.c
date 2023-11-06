#include "main.h"
#include <stdlib.h>
/**
 * init_dog - Initializes a dog structure with the provided data.
 * @d: A pointer to a struct dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
void init_dog(dog_t *d, char *name, float age, char *owner)
{
if (d == NULL)
{
return;
}
d->name = name;
d->age = age;
d->owner = owner;
}
/**
 * new_dog - Creates a new dog structure and initializes it.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 * Return: A pointer to the newly created dog structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d = malloc(sizeof(dog_t));
if (d == NULL)
{
return (NULL);
}
init_dog(d, name, age, owner);
return (d);
}
/**
 * free_dog - Frees the memory allocated for a dog structure.
 * @d: A pointer to a struct dog.
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d);
}
}
