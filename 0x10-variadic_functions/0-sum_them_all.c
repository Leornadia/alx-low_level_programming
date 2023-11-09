#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Return the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 * @...: A variable number parameter to calculate the sum of.
 * Return: if n == 0 - 0
 * Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
va_list args;
unsigned int i = 0;
if (n == 0)
{
return (0);
}
va_start(args, n);
while (i < n)
{
sum += va_arg(args, int);
++i;
}
va_end(args);
return (sum);
}
