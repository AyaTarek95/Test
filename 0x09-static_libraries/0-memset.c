#include "main.h"
/**
 * _memset - Short description, single line
 * @s: Description of parameter x
 * @b: 2nd
 * @n: 3rd
 * Return: Description of the returned value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
