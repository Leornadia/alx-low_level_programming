#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * This program prints all single-digit numbers of base 10,
 * starting from 0 and ending at 9, each followed by a new line.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(void)
{
int digit;
for (digit = 0; digit <= 9; digit++)
{
putchar('0' + digit);
putchar('\n');
}
return (0);
}
