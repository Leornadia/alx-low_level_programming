#include <stdio.h>
/* Function declaration for helper */
int helper(int n, int i);
/**
 * is_prime_number - Checks if a number is prime.
 * @n: The integer to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (helper(n, 2));
}
/**
 * helper - Helper function to check if n is divisible by any .
 * @n: The number to check
 * @i: The current divisor
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int helper(int n, int i)
{
if (i * i > n)
return (1);
if (n % i == 0)
return (0);
return (helper(n, i + 1));
}
