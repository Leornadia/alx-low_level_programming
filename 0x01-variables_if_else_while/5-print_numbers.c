#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * This program prints all single-digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(void)
{
int digit = 0;
while (digit <= 9)
{
putchar(digit + '0');
digit++;
}
putchar('\n');
return (0);
}
