#include <stdio.h>
/**
 * _strpbrk - Search a string for any set of bytes.
 * @s: The string to search.
 * @accept: The string containing characters to search for.
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *tmp = accept;
while (*tmp)
{
if (*s == *tmp)
return (s);
tmp++;
}
s++;
}
return (NULL);
}
