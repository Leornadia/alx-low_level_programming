#include <stdio.h>
/**
 * _strncat - Concatenate n characters from one string to another.
 * @dest: Destination string.
 * @src: Source string to append.
 * @n: Maximum number of characters to append.
 * Return: Pointer to the destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
char *result = dest;
while (*dest)
dest++;
while (*src && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
*dest = '\0';
return (result);
}
