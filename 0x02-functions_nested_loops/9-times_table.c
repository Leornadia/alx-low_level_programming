#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * times_table - Prints the 9 times table.
 *
 * Return: Always 0 (Success)
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
int main(void)
{
times_table();
return (0);
}
