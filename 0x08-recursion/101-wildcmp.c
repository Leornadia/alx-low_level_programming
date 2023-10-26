#include <stdio.h>
/**
 * Compares two strings and returns 1 if the strings can be considered identical, otherwise returns 0.
 * The second string can contain the special character *, which acts as a wildcard and can replace any string (including an empty string).
 *
 * @param s1 The first string to compare.
 * @param s2 The second string to compare.
 * @return 1 if the strings are identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '\0') 
{
return (*s1 == '\0');
}
if (*s2 == '*') 
{
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}
if (*s1 != *s2) 
{
return (0);
}
return (wildcmp(s1 + 1, s2 + 1));
}

