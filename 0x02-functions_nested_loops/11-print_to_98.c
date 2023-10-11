#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 */
void print_to_98(int n) 
{
if (n <= 98)
{
for (int i = n; i <= 98; i++) 
{
if (i < 98)
{
printf("%d, ", i);
} 
else 
{
printf("%d\n", i);
}
}
} 
else 
{
for (int i = n; i >= 98; i--) 
{
if (i > 98) 
{
printf("%d, ", i);
} 
else 
{
printf("%d\n", i);
}
}
}
}
int main(void) 
{
int n;
printf("Enter a number: ");
scanf("%d", &n);
print_to_98(n);
return 0;
}
