#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
times_table();
return (0);
}
/**
 * times_table - Prints the 9 times table.
 */
void times_table(void)
{
int row, column, product;
for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
product = row * column;
if (column == 0)
printf("%2d", product);
else
printf(", %2d", product);
}
printf("\n");
}
}
