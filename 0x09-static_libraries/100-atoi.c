#include <stdio.h>
/**
 * _atoi - Convert a string to an integer.
 * @s: String to convert.
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int i = 0;
if (s[0] == '-')
{
sign = -1;
i = 1;
}
while (s[i] != '\0')
{
result = result * 10 + (s[i] - '0');
i++;
}
return (sign *result);
}
