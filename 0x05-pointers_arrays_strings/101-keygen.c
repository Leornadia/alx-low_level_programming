#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/**
 * randomChar - Generates a random character from a given set
 * @set: A string containing characters to choose from
 *
 * Return: A randomly chosen character from the set
 */
char randomChar(const char *set)
{
int index = rand() % (int)strlen(set);
return (set[index]);
}
int main(void)
{
srand(time(NULL));
const char *validChars = "abcdefghijklmnopqrstuvwxyz";
int passwordLength = 10;
printf("Generated Password: ");
for (int i = 0; i < passwordLength; i++)
{
char randomCharResult = randomChar(validChars);
printf("%c", randomCharResult);
}
printf("\n");
return (0);
}
