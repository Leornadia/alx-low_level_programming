#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Frees the memory of a 2D grid.
 * @grid: The 2D grid to free.
 * @height: The height of the grid.
 */
void free_grid(int **grid, int height)
{
int i = 0;
if (grid == NULL || height <= 0)
{
return;
}
while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}
