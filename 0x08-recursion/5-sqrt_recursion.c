#include <stdio.h>
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The square root of n, or -1.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n <= 1)
return (n);
int i = 0;
while ((i * i) < n)
{
i++;
}
if (i * i == n)
return (i);
return (-1);
}
