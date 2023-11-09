#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - Prints values based on the format string: 'c' (char),
 * 'i' (integer), 'f' (float), 's' (string, prints (nil) if NULL).
 * @format: A string containing format specifiers.
 * @...: Variable number of arguments corresponding to format specifie
 */
void print_all(const char * const format, ...)
{
va_list args;
const char *temp_format;
unsigned int i;
va_start(args, format);
temp_format = format;
while (*temp_format)
{
i = 0;
while (temp_format[i] != 'c' && temp_format[i] != 'i'
&& temp_format[i] != 'f' && temp_format[i] != 's'
&& temp_format[i] != '\0')
{
++i;
}
if (temp_format[i] == 'c')
{
printf("%c", (char)va_arg(args, int));
}
else if (temp_format[i] == 'i')
{
printf("%d", va_arg(args, int));
}
else if (temp_format[i] == 'f')
{
printf("%f", (float)va_arg(args, double));
}
else if (temp_format[i] == 's')
{
char *str = va_arg(args, char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
}
if (temp_format[i] && (temp_format[i] == 'c' || temp_format[i] == 'i'
|| temp_format[i] == 'f' || temp_format[i] == 's'))
{
printf(", ");
}
temp_format += i + 1;
}
va_end(args);
printf("\n");
}
