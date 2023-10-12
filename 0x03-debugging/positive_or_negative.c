#include "main.h"
#include <stdio.h>
/**
 * positive_or_negative - Determines if is positive, negative, or zero.
 * @n: The number to be checked.
 */
void positive_or_negative(int n)
{
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
}
