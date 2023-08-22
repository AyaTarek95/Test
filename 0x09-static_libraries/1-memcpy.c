#include "main.h"
/**
 * _memcpy - Short description, single line
 * @dest: Description of parameter x
 * @src : 2nd
 * @n: 3rd
 * Return: Description of the returned value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;
	int i;

	if (size > 0)
	for (i = 0; i < size; i++)
		dest[i] = src[i];

	return (dest);
}
