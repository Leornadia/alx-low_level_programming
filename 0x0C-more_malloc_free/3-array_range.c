#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - Creates an array of integers from min to max,
 * @min: The minimum value for the array
 * @max: The maximum value for the array
 *
 * Description: This function creates an array of integers.
 * from 'min' to 'max', inclusive, ordered from 'min' to 'max'.
 * for the array and returns a pointer to it.
 *
 * Return: The pointer to the newly created array, or NULL if allocation.
 */
int *array_range(int min, int max)
{
int *array;
int i, size;
if (min > max)
return (NULL);
size = max - min + 1;
array = malloc(sizeof(int) * size);
if (array == NULL)
return (NULL);
i = 0;
while (i < size)
{
array[i] = min + i;
i++;
}
return (array);
}
