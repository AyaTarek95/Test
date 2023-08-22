#include "main.h"
/**
 * _memset - function to set certain char in s
 * s: to be set with b value
 * b: value to be set in s
 * n: no. of members in s to be set as b
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;

return (s);
}
/**
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	
	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	
	if (!ptr)
		return (NULL);
	
	_memset(ptr, 0, size * nmemb);

	return (ptr);
}
