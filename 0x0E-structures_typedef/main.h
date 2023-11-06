#ifndef MAIN_H
#define MAIN_H

#include "dog.h"
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog;

typedef struct dog dog_t;

void print_dog(struct dog *d);
struct dog *new_dog(char *name, float age, char *owner);
void free_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif/*MAIN_H*/
