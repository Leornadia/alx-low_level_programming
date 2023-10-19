#include "main.h"
/**
 * is_separator - Checks if a character is a separator
 * @c: The character to check
 *
 * Return: 1 if the character is a separator, 0 otherwise
 */
int is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
int i = 0;
while (separators[i] != '\0')
{
if (c == separators[i])
return (1);
i++;
}
return (0);
}
/**
 * cap_string - Capitalizes all words of a string
 * @str: The input string
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *str)
{
int capitalize = 1;
int i = 0;
while (str[i] != '\0')
{
if (is_separator(str[i]))
{
capitalize = 1;
}
else if (capitalize && (str[i] >= 'a' && str[i] <= 'z'))
{
str[i] -= 32;
capitalize = 0;
}
else
{
capitalize = 0;
}
i++;
}
return (str);
}
