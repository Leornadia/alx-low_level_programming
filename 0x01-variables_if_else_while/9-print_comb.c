#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * This program prints all possible combinations of single-digit numbers,
 * separated by ", " in ascending order, using only four putchar calls.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(void)
{
int digit;
for (digit = 0; digit <= 9; digit++)
{
putchar('0' + digit);
if (digit < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
