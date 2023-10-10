#ifndef MAIN_H
#define MAIN_H
/* Function prototype */
void print_alphabet(void);
#endif /* MAIN_H */
#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 */
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
