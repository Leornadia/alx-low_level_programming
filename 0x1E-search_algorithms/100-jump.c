#include <math.h>
#include <stdio.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where the value is located, or -1 if the value
 *         is not present in the array or if the array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, prev = 0, i;

	if (array == NULL)
		return (-1);

	jump = sqrt(size);

	for (i = 0; i < size; i += jump)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] >= value)
			break;
		prev = i;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, i);

	for (i = prev; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		else if (array[i] > value)
			return (-1);
	}

	return (-1);
}
