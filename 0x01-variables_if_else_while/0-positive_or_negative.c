#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program.
 *
 * This program generates a random number and determines if it's positive,
 * negative, or zero. It then prints the result.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
