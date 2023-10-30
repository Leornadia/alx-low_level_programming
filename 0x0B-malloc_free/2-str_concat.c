#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings into a newly allocated space.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated concatenated string or NULL.
 */
char *str_concat(char *s1, char *s2)
{
char *concatenated;
unsigned int len1 = 0;
unsigned int len2 = 0;
unsigned int i = 0, j = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));
if (concatenated == NULL)
return (NULL);
while (s1[i] != '\0')
{
concatenated[i] = s1[i];
i++;
}
while (s2[j] != '\0')
{
concatenated[i] = s2[j];
i++;
j++;
}
concatenated[i] = '\0';
return (concatenated);
}
