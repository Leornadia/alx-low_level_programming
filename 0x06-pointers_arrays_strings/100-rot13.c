#include <stdio.h>
/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The input string to encode.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
int i = 0;
while (str[i])
{
char c = str[i];
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
str[i] = (c - 'A' < 26 ? 'A' : 'a') +
(c - (c - 'A' < 26 ? 'A' : 'a') + 13) % 26;
}
i++;
}
return (str);
}
