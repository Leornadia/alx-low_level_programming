#include "main.h"
/**
 * main - Entry point of the program.
 *
 * This program prints the lowercase alphabet
 * followed by a new line using the _putchar function.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
return (0);
}
