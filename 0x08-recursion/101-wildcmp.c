#include <stdio.h>
/**
 * Compares two strings and returns 1 if the strings can returns 0.
 * The second string can contain the special character *, which acts as a wildcard.
 *
 * @param s1 The first string to compare.
 * @param s2 The second string to compare.
 * @return 1 if the strings are identical, othe
 */
int wildcmp_10(char *s1, char *s2) 
{
while (*s1 != '\0' && *s2 != '\0') 
{
if (*s2 == '*') 
{
if (*s1 == '\0') 
{
return (1);
}
s2++;
} 
else if (*s1 != *s2)
{
return (0);
}
s1++;
s2++;
}
if (*s1 == *s2) 
{
return (1);
} 
else 
{
return (0);
}

