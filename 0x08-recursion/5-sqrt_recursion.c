#include <stdio.h>
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The square root of n or -1 if n doesn't have a natural square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (find_sqrt(n, 0));
}
/**
 * find_sqrt - Helper function to find the square root using recursion.
 * @n: The number to find the square root of.
 * @i: The current value for iteration.
 *
 * Return: The square root of n or -1 if n doesn't have a natural square root.
 */
int find_sqrt(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (find_sqrt(n, i + 1));
}
