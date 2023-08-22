#include "main.h"

/**
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, j, len1, len2;
	i = 0, j = 0;
	len1 = strlen(s1);
	len2 = strlen(s2);

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
		if (s3 == NULL)
		return(NULL);

	for (i = 0; i < len1; i++)
		{
		s3[i] = s1[i];
		}
	if (n >= len2)
	{
		s3[i] = s2[j];
		j++;
	}
	else
	{
		s3[i] = s2[0];
	}

	s3[i] = '\0';

	return(s3);
}
