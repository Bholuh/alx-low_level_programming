#include "main.h"
/**
 * alloc_grid - allocates a grid, make space and free space
 * @width: takes in width of grid
 * @height: height of grid
 * Return: grid with freed spaces
 */

int **alloc_grid(int width, int height)
{
/*Declaring variables*/
int **grid;
int a, b;

if (width <= 0 || height <= 0)
{
return (NULL);
}

grid = malloc(sizeof(int *) * height); /*malloc*/

if (grid == NULL)
{
return (NULL);
}

for (a = 0; a < height; a++)
{
grid[a] = malloc(sizeof(int) * width);
if (grid[a] == NULL)
{
for (a = a - 1; a >= 0; a--)
{
free(grid[a]);
}
free(grid);
return (NULL);
}
}
for (a = 0; b < width; b++)
grid[a][b] = 0;
return (grid);
}
