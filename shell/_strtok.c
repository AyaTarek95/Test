#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int __attribute__((unused))ac, char **av)
{
	char *lineptr = NULL, *token, *lineptr_cpy = NULL, *prompt = "$";
	int i, num_tokens = 0;
	ssize_t nchars_read;
	size_t n = 0;
	const char *delim = " \n";
	while (1)
	{
	printf("%s", prompt);
	nchars_read = getline(&lineptr, &n, stdin);
	if (nchars_read == -1)
		{
			printf("Exitting programm...\n");
			return (-1);
		}
	/*printf("%s\n", lineptr);*/

	lineptr_cpy = malloc(sizeof(char) * nchars_read);
	strcpy(lineptr_cpy, lineptr);
	token = strtok(lineptr, delim);
	while (token != NULL)
	{
		num_tokens++;
		token = strtok(NULL, delim);
	}
	num_tokens++;

	av = malloc(sizeof(char) * num_tokens);
	token = strtok(lineptr_cpy, delim);
	for (i = 0; token != NULL; i++)
	{
		av[i] = malloc(sizeof(char) * strlen(token));
		strcpy(av[i], token);
		token = strtok(NULL, delim);
	}
	av[i] = NULL;
	for (i = 0; av[i] != NULL; i++)
		printf("%s\n", av[i]);
	}
	
	free(lineptr_cpy);

return (0);
}
