#include <stdio.h>
/**
 * _memcpy - Copy memory area from source to destination.
 * @dest: Destination memory area.
 * @src: Source memory area.
 * @n: Number of bytes to copy.
 * Return: Pointer to the destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *result = dest;
unsigned int i = 0;
while (i < n)
{*dest = *src;
dest++;
src++;
i++;
}
return (result);
}
