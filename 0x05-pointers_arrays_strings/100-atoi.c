#include "main.h"
#include <limits.h>
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
while (*s == '-' || *s == '+')
{
if (*s == '-')
sign *= -1;
s++;
}
while (*s >= '0' && *s <= '9')
{
int digit = *s - '0';
if (sign > 0 && (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10)))
return (sign == 1 ? INT_MAX : INT_MIN);
result = result * 10 + sign * digit;
s++;
}
return (result);
}
