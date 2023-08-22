#include "main.h"
/**
 *    - 
 * @
 * @
 * Return: 
 */
int *array_range(int min, int max)
{
	int *a;
	int i, size;
	size = max - min + 1;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * size);
		if (!a)
		return (NULL);
	for (i = 0; min <= max; i++)
		a[i] = min++;	


	return (a);
}
