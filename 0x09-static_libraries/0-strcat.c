#include <stdio.h>
/**
 * _strcat - Concatenate two strings.
 * @dest: Destination string.
 * @src: Source string to append.
 * Return: Pointer to the destination string.
 */
char *_strcat(char *dest, char *src)
{
char *result = dest;
while (*dest)
dest++;
while (*src)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (result);
}
