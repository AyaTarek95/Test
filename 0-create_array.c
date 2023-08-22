#include "main.h"
/**
 *
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = (char*)malloc(size * sizeof(*array));
	if (array == 0)
		return(NULL);

	for (i = 0; i < size; i++)
	array[i] = c;

	return (array);
}

