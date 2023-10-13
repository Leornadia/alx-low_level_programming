#include "main.h"
/**
 * print_line - Draws a straight line of underscores in the terminal.
 * @n: The number of underscores to print.
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}
}
