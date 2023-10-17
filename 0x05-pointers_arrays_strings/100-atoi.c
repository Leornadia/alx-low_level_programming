#include "main.h"
#include <limits.h>
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value of the string.
 */
int main(void)
{
char *strings[] =
{
"98",
"-402",
"   -98",
"  214748364",
"0",
"  402",
"98",
"402",
};
for (int i = 0; i < 8; i++)
{
int num = _atoi(strings[i]);
printf("%d\n", num);
}
return (0);
}
