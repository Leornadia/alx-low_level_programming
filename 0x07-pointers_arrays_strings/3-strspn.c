#include <stdio.h>
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: A pointer to the string to be analyzed.
 * @accept: A pointer to the string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of 's'.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
while (*s)
{
int found = 0;
char *a = accept;
while (*a)
{
if (*s == *a)
{
found = 1;
break;
}
a++;
}
if (found)
{
count++;
s++;
}
else
{
break;
}
}
return (count);
}
