#include <stdio.h>
/**
 * _puts - Print a string to the standard output.
 * @s: String to print.
 */
void _puts(char *s)
{
while (*s)
{
putchar(*s);
s++;
}
putchar('\n');
}
