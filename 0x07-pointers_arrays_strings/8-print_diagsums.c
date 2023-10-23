#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the other diagonal of a square matrix.
 * @a: A pointer to the square matrix (2D array).
 * @size: The size of the matrix (number of rows and columns).
 */
void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - i - 1)];
}
printf("%d, %d\n", sum1, sum2);
}
