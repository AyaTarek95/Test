#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
	int flag, i, j, c;
	
	c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{	c++;
				flag = 1;
			}
			if ( flag == 0)
				return (c);
		}

	}
	return (0);
}
