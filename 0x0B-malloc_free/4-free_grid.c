#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid - Frees 2 Dimensional Array
* @grid: 2 Dimensional Grid
* @height: Height Dimension Of Grid
* Description: Frees Memory Of Grid
* Return: Value Is nothing
*/

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
