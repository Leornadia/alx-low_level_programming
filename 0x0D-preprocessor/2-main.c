#include <stdio.h>
/**
 * main - Entry point of the program.
 * Return: 0 on success, non-zero on failure.
 *
 * This function prints the name of the file it was compiled from,
 * followed by a new line.
 */
int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
