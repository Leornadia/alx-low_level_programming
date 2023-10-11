#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 *
 * Return: void
 */
void print_to_98(int n)
{
while (n != 98)
{
printf("%d, ", n);
if (n > 98)
n--;
else
n++;
}
printf("98\n");
}
/**
 * main - Entry point.
 *
 * This is the main function where the program starts execution. It prompts the
 * user to enter a number and then calls the print_to_98 function.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
int num;
printf("Enter a number: ");
scanf("%d", &num);
print_to_98(num);
return (0);
}
