#include <stdio.h>
/**
 * main - causes an infinite loop
 * Return: 0
 */
int main(void)
{
int i;
printf("Infinite loop incoming :(\n");
i = 0;
while (i < 10)
{
/* Comment out the line that causes the infinite loop */
/* putchar(i); */
i++; /* Increment i to avoid the infinite loop */
}
printf("Infinite loop avoided! \\o/\n");
return (0);
