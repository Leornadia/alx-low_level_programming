#include <stdio.h>
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments, including the program name.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: Always returns 0 to indicate success.
 */
int main(int argc, char *argv[])
{
int i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
