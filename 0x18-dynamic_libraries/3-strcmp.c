#include <stdio.h>
/**
 * _strcmp - Compare two strings.
 * @s1: First string to compare.
 * @s2: Second string to compare.
 * Return: 0 if strings are equal, a negative value if s1 is less than s2,
 * and a positive value if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return (*s1 - *s2);
}
