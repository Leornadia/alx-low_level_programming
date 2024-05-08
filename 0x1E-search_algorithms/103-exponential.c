#include "search_algos.h"
#include <limits.h>

/**
 * exponential_search - Searches for a value using 
 *                       exponential and binary search
 * @array: Pointer to first element of array 
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located or -1 if not found
*/
int exponential_search(int *array, size_t size, int value)
{
  int i;
  int left;
  int right;
  int j;

  if(!array)
    return -1;

  i = 1;

 
  while ((int)i < size && array[i] < value) {
    printf("Value checked array[%d] = [%d]\n", i, array[i]);
    i *= 2;
  }


  left = i / 2;
  right = INT_MIN(i, size - 1);
  
  while(left <= right) {
    int mid = left + (right - left) / 2;
    printf("Searching in array: ");
    
    for(j = left; j <= right; j++) {
      printf("%d, ", array[j]); 
    }

    printf("\n");

    if(array[mid] == value)
      return mid;
    else if (array[mid] < value)
      left = mid + 1;
    else
      right = mid - 1;
  }

  
  return -1; 
}


