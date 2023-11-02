#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array, using malloc
 * @nmemb: The number of elements of the array
 * @size: The size of each element in bytes
 *
 * Return: A pointer to the allocated memory, which is set to zero
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i = 0, total;
char *p;
if (nmemb == 0 || size == 0)
return (NULL);
total = nmemb * size;
ptr = malloc(total);
if (ptr == NULL)
return (NULL);
p = ptr;
while (i < total)
{
p[i] = 0;
i++;
}
return (ptr);
}
