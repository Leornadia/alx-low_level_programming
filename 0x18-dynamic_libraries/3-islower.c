#include <stdio.h>
#include <ctype.h>
/**
 * _islower - Check if a character is a lowercase letter.
 * @c: Character to check.
 * Return: 1 if lowercase, 0 otherwise.
 */
int _islower(int c)
{
if (islower(c))
return (1);
else
return (0);
}
