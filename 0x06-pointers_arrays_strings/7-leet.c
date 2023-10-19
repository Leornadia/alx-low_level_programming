#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @str: The input string
 *
 * Return: A pointer to the modified string
 */
char *leet(char *str)
{
int i;
char leetReplace[] = "aAeEoOtTlL";
char leetMapping[] = "4433007711";
for (i = 0; str[i] != '\0'; i++)
{
int j = 0;
while (leetReplace[j] != '\0')
{
if (str[i] == leetReplace[j])
{
str[i] = leetMapping[j];
break;
}
j++;
}
}
return (str);
}
