#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * This program prints all possible different combinations of two digits.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(void)
{
int firstDigit;
int secondDigit;
for (firstDigit = 0; firstDigit <= 8; firstDigit++)
{
for (secondDigit = firstDigit + 1; secondDigit <= 9; secondDigit++)
{
putchar('0' + firstDigit);
putchar('0' + secondDigit);
if (firstDigit < 8 || secondDigit < 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
