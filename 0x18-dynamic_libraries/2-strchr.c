#include <stdio.h>
/**
 * _strchr - Locate the first occurrence of a character in a string.
 * @s: String to search.
 * @c: Character to locate.
 * Return: Pointer to the first occurrence of the character, or NULL.
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);
return (NULL);
}
