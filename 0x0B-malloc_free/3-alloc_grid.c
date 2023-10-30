#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Allocates a 2D grid of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the 2D grid or NULL on failure or invalid input.
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
{
return (NULL);
}
i = 0;
while (i < height)
{
grid[i] = (int *)malloc(width * sizeof(int));
if (grid[i] == NULL)
{
j = 0;
while (j < i)
{
free(grid[j]);
j++;
}
free(grid);
return (NULL);
}
j = 0;
while (j < width)
{
grid[i][j] = 0;
j++;
}
i++;
}
return (grid);
}
