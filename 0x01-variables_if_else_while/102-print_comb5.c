#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * This program prints all possible combinations of two two-digit numbers.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(void)
{
int tensDigit1, onesDigit1, tensDigit2, onesDigit2;
for (tensDigit1 = 0; tensDigit1 <= 9; tensDigit1++)
{
for (onesDigit1 = 0; onesDigit1 <= 9; onesDigit1++)
{
for (tensDigit2 = tensDigit1; tensDigit2 <= 9; tensDigit2++)
{
for (onesDigit2 = (tensDigit1 == tensDigit2) ? (onesDigit1 + 1) : 0; onesDigit2 <= 9; onesDigit2++)
{
putchar('0' + tensDigit1);
putchar('0' + onesDigit1);
putchar(' ');
putchar('0' + tensDigit2);
putchar('0' + onesDigit2);
if (!(tensDigit1 == 9 && onesDigit1 == 8 && tensDigit2 == 9 && onesDigit2 == 9))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
