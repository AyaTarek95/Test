#include "main.h"
/**
 *
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if ((width <= 0) || (height <= 0))
		return (NULL);

		
	a = malloc(sizeof(*a) * height);
			if (a == NULL)
				return (NULL);
		for (i = 0; i < height; i++)
		{
			a[i] = malloc(width * sizeof(**a));
			if (a[i] == NULL)
			{
				for (i--; i >= 0; i--)
				free (a[i]);
			free (a);
				return (NULL);
		}
			for (j = 0; j < width; j++)
				a[i][j] = 0;
		}
		return(a);
}


