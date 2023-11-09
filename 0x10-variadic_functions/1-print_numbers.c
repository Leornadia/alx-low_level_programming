#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of integers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
va_start(args, n);
i = 0;
if (n > 0)
{
int num = va_arg(args, int);
printf("%d", num);
++i;
}
while (i < n)
{
int num = va_arg(args, int);
if (separator != NULL)
{
printf("%s", separator);
}
printf("%d", num);
++i;
}
va_end(args);
printf("\n");
}
