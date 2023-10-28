#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - Check if a character is a digit (0-9).
 * @c: Character to check.
 * Return: 1 if a digit, 0 otherwise.
 */
int _isdigit(int c)
{
if (isdigit(c))
return (1);
else
return (0);
}
