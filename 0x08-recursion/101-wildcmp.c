#include <stdio.h>
/**
 * wildcmp - Compares two strings and returns 1.
 * @s1: The first string to compare
 * @s2: The second string to compare.
 * @i: The current index of s1
 * @j: The current index of s2
 * @last: The last index of s2 where a * was found
 *
 * Return: 1 if the strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2, int i, int j, int last)
{
if (s1[i] == '\0' && s2[j] == '\0')
return (1);
if (s2[j] == '*')
{
last = j;
return (wildcmp(s1, s2, i, j + 1, last));
}    
if (s1[i] != s2[j])
{
if (last == -1)
return (0);
return (wildcmp(s1, s2, i + 1, last + 1, last));
}   
return (wildcmp(s1, s2, i + 1, j + 1, last));
}
