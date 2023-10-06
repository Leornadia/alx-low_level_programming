#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * This program prints the lowercase alphabet (excluding 'e' and 'q')
 * followed by a new line.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
letter++;
}
putchar('\n');
return (0);
}
