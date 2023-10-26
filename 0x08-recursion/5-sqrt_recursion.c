#include <stdio.h>
/* Function prototype for _sqrt_helper */
int _sqrt_helper(int n, int i);
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The square root of n or -1 if n doesn't have a natural square root.
 */
int _sqrt_recursion(int n)
{
return (_sqrt_helper(n, 1));
}
/**
 * _sqrt_helper - Helper function to find the square root using recursion.
 * @n: The number to find the square root of.
 * @i: The current value for iteration.
 *
 * Return: The square root of n or -1 if n doesn't have a natural square root.
 */
int _sqrt_helper(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (_sqrt_helper(n, i + 1));
}

