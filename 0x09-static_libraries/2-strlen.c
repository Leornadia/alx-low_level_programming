#include <stdio.h>
/**
 * _strlen - Calculate the length of a string.
 * @s: String to find the length of.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int length = 0;
while (*s)
{
length++;
s++;
}
return (length);
}
