#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes of s2 to concatenate
 *
 * Return: A pointer to the newly allocated space in memory, which contains s1.
 * If the function fails, it returns NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * If NULL is passed, treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1])
len1++;
while (s2[len2])
len2++;
if (n >= len2)
n = len2;
s = malloc(sizeof(char) * (len1 + n + 1));
if (s == NULL)
return (NULL);
while (i < len1)
{
s[i] = s1[i];
i++;
}
while (j < n)
{
s[i] = s2[j];
i++;
j++;
}
s[i] = '\0';
return (s);
}
