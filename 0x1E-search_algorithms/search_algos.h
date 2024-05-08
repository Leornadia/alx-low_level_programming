#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - Searches for a value in an array of integers
 *                 using the Linear search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where the value is located, or -1 if the value
 *         is not present in the array or if the array is NULL
 */
int linear_search(int *array, size_t size, int value);

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located, or -1 if the value
 *         is not present in the array or if the array is NULL
 */
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);


#endif /* SEARCH_ALGOS_H */
