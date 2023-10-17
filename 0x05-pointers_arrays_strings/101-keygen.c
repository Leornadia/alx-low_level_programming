#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/**
 * randomChar - Generates a random character from a given set
 * @set: The character set
 *
 * Return: A randomly selected character from the set
 */
char randomChar(char *set)
{
int index = rand() % strlen(set);
return (set[index]);
}
/**
 * main - Generates a random password based on specific rules
 *
 * Return: Always 0
 */
int main(void)
{
char charset[] = "abcdefghijklmnopqrstuvwxyz";
int passwordLength = 8;
srand(time(NULL));
printf("Generated Password: ");
for (int i = 0; i < passwordLength; i++)
{
char randomCharacter = randomChar(charset);
printf("%c", randomCharacter);
}
printf("\n");
return (0);
}
