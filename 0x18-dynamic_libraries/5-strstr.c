#include <stdio.h>
/**
 * _strstr - Locate a substring in a string.
 * @haystack: The string to search.
 * @needle: The substring to find.
 * Return: A pointer to the first occurrence of the substring.
 * string haystack, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *h = haystack;
char *n = needle;
while (*n && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
haystack++;
}
return (NULL);
}
