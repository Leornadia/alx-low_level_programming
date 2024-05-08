#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - Searches for a value in a sorted array of integers.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if  array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	double ratio;
	size_t pos;

	if (array == NULL)
	{
		return (-1);
	}
	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
			{
				return (low);
			}
			return (-1);
		}

		ratio = (double)(high - low) / (array[high] - array[low]);
		pos = low + (ratio * (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", (unsigned long)pos, array[pos]);

		if (array[pos] == value)
		{
			return (pos);
		} else if (array[pos] < value)
		{
			low = pos + 1;
		} else
		{
			high = pos - 1;
		}
	}

	return (-1);
}




