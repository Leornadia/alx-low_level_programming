#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Prints a name using a provided printing function.
 * @name: A pointer to the name to be printed.
 * @printFunction: A function pointer to the printing function.
 */
void print_name(char *name, void (*printFunction)(char *))
{
if (printFunction != NULL)
{
printFunction(name);
}
}
/**
* print_name_function - Example print function that prints the name.
* @name: A pointer to the name to be printed.
*/
void print_name_function(char *name)
{
printf("Name: %s\n", name);
}
