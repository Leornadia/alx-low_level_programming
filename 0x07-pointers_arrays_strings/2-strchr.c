#include <stdio.h>
/**
 * _strchr - Locates a character in a string.
 * @s: A pointer to the string to search.
 * @c: The character to locate.
 *
 * Return: A pointer to the first  of the character 'c' in the string 's'.
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (c == '\0')
return (s);
return (NULL);
}
