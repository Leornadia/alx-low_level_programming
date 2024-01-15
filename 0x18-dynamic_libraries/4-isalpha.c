#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - Check if a character is an alphabetic character (A-Z or a-z).
 * @c: Character to check.
 * Return: 1 if alphabetic, 0 otherwise.
 */
int _isalpha(int c)
{
if (isalpha(c))
return (1);
else
return (0);
}
