#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments, including the program name.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 for success, 1 for error.
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i = 1;
if (argc == 1)
{
printf("0\n");
return (0);
}
while (i < argc)
{
int j = 0;
while (argv[i][j] != '\0')
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
j++;
}
sum += atoi(argv[i]);
i++;
}
printf("%d\n", sum);
return (0);
}
