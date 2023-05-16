#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create a 2d integer grid using malloc.
 * Description: Each element of the grid should be initialized to 0.
 * @width: size width
 * @height: size height
 * Return: Pointer to new grid
 */

int **alloc_grid(int width, int height)
{
int **a;
int i, j;

if (width + height < 2 || width < 1 || height < 1)
return (NULL);

a = malloc(height * sizeof(*a));
if (a == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
a[i] = malloc(width * sizeof(**a));
if (a[i] == NULL)
{
while (i >= 0)
{
free(a[i]);
i--;
}
free(a);
return (NULL);
}
for (j = 0; j < width; j++)
a[i][j] = 0;
}

return (a);
}
