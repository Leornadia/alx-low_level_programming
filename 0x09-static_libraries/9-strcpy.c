#include <stdio.h>
/**
 * _strcpy - Copy a string from source to destination.
 * @dest: The destination string.
 * @src: The source string.
 * Return: A pointer to the destination string (dest).
 */
char *_strcpy(char *dest, char *src)
{
char *temp = dest;
while (*src)
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';
return (temp);
}
