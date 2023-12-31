#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes a given function on each element of an array.
 * @array: The array to iterate over.
 * @size: The size of the array.
 * @action: A function pointer to the action to be applied to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
if (array == NULL || action == NULL)
return;
while (i < size)
{
action(array[i]);
i++;
}
}
