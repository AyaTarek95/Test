#include "main.h"
/**
 * _strcpy - Short description, single line
 * @dest: Description of parameter x
 * @src: 2nd
 * Return: Description of the returned value
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
