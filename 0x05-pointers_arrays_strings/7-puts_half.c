#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
return (length);
}
/**
 * puts_half - Prints the second half of a string.
 * @str: The input string.
 */
void puts_half(char *str)
{
int length = _strlen(str);
int start = length / 2;
if (length % 2 != 0)
{
start++;
}
while (str[start] != '\0')
{
_putchar(str[start]);
start++;
}
_putchar('\n');
}
