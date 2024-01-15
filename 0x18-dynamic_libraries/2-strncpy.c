#include <stdio.h>
/**
 * _strncpy - Copy the first n characters from source to destination.
 * @dest: Destination string.
 * @src: Source string to copy from.
 * @n: Maximum number of characters to copy.
 * Return: Pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
char *result = dest;
while (*src && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
while (n > 0)
{
*dest = '\0';
dest++;
n--;
}
return (result);
}
