#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * This program prints the lowercase alphabet in reverse,
 * followed by a new line, using only two putchar calls.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n');
return (0);
}
