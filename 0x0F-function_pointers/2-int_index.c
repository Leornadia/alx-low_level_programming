#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array using a comparison.
 * @array: The array to search.
 * @size: The number of elements in the array.
 * @cmp: A function pointer to the comparison function.
 *
 * Return: The index of the first element for which the comparison.
 * not return 0. If no such element is found, or if size is less.
 * 0, it returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (array != NULL && cmp != NULL && size > 0)
{
while (i < size)
{
if (cmp(array[i]) != 0)
{
return (i);
}
i++;
}
}
return (-1);
}
/**
 * is_even - Example comparison function that checks if an integer is even.
 *
 * @n: The integer to be checked for evenness.
 *
 * Return: 1 if the integer is even, 0 otherwise.
 */
int is_even(int n)
{
return ((n % 2 == 0) ? 1 : 0);
}
