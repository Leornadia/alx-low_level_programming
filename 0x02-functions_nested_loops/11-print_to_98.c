#include <stdio.h>
/**
 * main - Entry point
 *
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
if (n <= 98)
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
printf(", ");
n++;
}
}
else
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
printf(", ");
n--;
}
}
printf("\n");
}
int main(void)
{
int n = 10; 
print_to_98(n);
return (0);
}
