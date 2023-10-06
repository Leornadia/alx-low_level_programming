#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * This program prints the alphabet in lowercase, followed by a new line,
 * and then in uppercase, followed by a new line.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(void)
{
char lowercase_letter = 'a';
char uppercase_letter = 'A';
while (lowercase_letter <= 'z')
{
putchar(lowercase_letter);
lowercase_letter++;
}
while (uppercase_letter <= 'Z')
{
putchar(uppercase_letter);
uppercase_letter++;
}
putchar('\n');
return (0);
}
