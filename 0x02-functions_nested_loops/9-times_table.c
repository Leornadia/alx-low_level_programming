#include <stdio.h>
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
printf("0%2d", product);
else
printf(",%3d", product);
}
printf("\n");
}
}
