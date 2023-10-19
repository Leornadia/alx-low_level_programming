#include <stdio.h>
/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The input string to encode.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
char *ptr = str;
while (*ptr)
{
if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
{
char base = (*ptr >= 'a' && *ptr <= 'z') ? 'a' : 'A';
*ptr = ((*ptr - base + 13) % 26) + base;
}
ptr++;
}
return (str);
}
