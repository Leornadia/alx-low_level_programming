#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - Prints the opcodes in a hexadecimal string.
 *
 * This function takes a hexadecimal string 'opcodes' and prints each opcode
 * as a decimal number, separated by spaces.
 *
 * @opcodes: The hexadecimal string containing opcodes to be printed.
 */
void print_opcodes(const char *opcodes)
{
if (opcodes[0] == '\0' || opcodes[1] == '\0')
{
printf("\n");
return;
}
int opcode = (int)strtol(opcodes, NULL, 16);
printf("%d", opcode);
if (opcodes[2] != '\0')
{
printf(" ");
}
print_opcodes(opcodes + 2);
}
/**
* main - Entry point of the program.
*
* This function is the entry point of the program. It takes one command-line
* argument, which should be a hexadecimal string of opcodes. It calls the
* print_opcodes function to print the opcodes as decimal numbers.
*
* @argc: The number of command-line arguments.
* @argv: An array of command-line argument strings.
*
* Return: 0 on success, or 1 on error.
*/
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Usage: %s <opcodes>\n", argv[0]);
return (1);
}
char *opcodes = argv[1];
print_opcodes(opcodes);
return (0);
}
