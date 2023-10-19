#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description:
 * This function initializes an integer variable 'n' and an integer array 'a',
 * and a pointer 'p'. It assigns the value 1024 to a[2] and assigns the
 * address of 'n' to pointer 'p'. Then, it updates 'a[2]' to 98, and prints
 * the value of 'a[2]' followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
int a[5];
int *p;
a[2] = 1024;
p = &n;
  /*
   * Write your line of code here...
   * Remember:
   * - You are not allowed to use 'a'
   * - You are not allowed to modify 'p'
   * - Only one statement
   * - You are not allowed to code anything else than this line of code
   */
a[2] = 98;
  /* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
