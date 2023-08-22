#include "main.h"
/**
 *
 */
char *_strdup(char *str)
{
	int i;
	char *s;
	int len = strlen(str);

	if (str == NULL)
		return (NULL);

	s = malloc(sizeof(*str));
	if (s == 0)
		return (NULL);
	
	for (i = 0; i < len; i++)	
	s[i] = str[i];

	return (s);
}
