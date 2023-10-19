#include <stdio.h>
/**
 * _strcmp - Compares two strings
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Return: An integer less than, equal to, or greater than zero if s1 is
 * less than, equal to, or greater than s2, respectively
 */
int _strcmp(const char *s1, const char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
