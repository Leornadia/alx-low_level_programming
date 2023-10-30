#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Creates an array of characters and initializes it.
 * @size: The size of the array to create.
 * @c: The character with which to initialize the array.
 *
 * Return: If memory allocation fails or size is 0, returns NULL.
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
{
return (NULL);
}
array = (char *)malloc(size * sizeof(char));
if (array == NULL)
{
return (NULL);
}
i = 0;
while (i < size)
{
array[i] = c;
i++;
}
return (array);
}
