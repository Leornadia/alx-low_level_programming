#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Duplicates a string using malloc.
 * @str: The input string to duplicate.
 *
 * Return: A pointer to the newly allocated duplicated string, or NULL.
 */
char *_strdup(char *str)
{
char *duplicate;
unsigned int length = 0;
unsigned int i;
if (str == NULL)
{
return (NULL);
}
while (str[length] != '\0')
{
length++;
}
duplicate = (char *)malloc(length + 1);
if (duplicate == NULL)
{
return (NULL);
}
i = 0;
while (i < length)
{
duplicate[i] = str[i];
i++;
}
duplicate[i] = '\0';
return (duplicate);
}
