#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: A pointer to a new string containing concatenated arguments.
 * or NULL on failure or if ac == 0 or av == NULL.
 */
char *argstostr(int ac, char **av)
{
int i, j, total_length = 0;
int k = 0;
char *concatenated;
if (ac == 0 || av == NULL)
return (NULL);
i = 0;
while (i < ac)
{
j = 0;
while (av[i][j] != '\0')
{
total_length++;
j++;
}
total_length++;
i++;
}
concatenated = (char *)malloc((total_length + 1) * sizeof(char));
if (concatenated == NULL)
return (NULL);
i = 0;
j = 0;
while (i < ac)
{
while (av[i][j] != '\0')
{
concatenated[k] = av[i][j];
k++;
j++;
}
concatenated[k] = '\n';
k++;
i++;
}
concatenated[k] = '\0';
return (concatenated);
}
