#include <stdio.h>
/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string to measure
 *
 * Return: The length of s
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
/**
 * helper - Checks if a string is a palindrome
 * @s: The string to check
 * @start: The start index
 * @end: The end index
 *
 * Return: 1 if it's a palindrome, 0 otherwise
 */
int helper(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (helper(s, start + 1, end - 1));
}
/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if it's a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
return (helper(s, 0, len - 1));
}
