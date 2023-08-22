#include <stdio.h>
/**
 * main - prints prompt and read line and print it
 *
 * Return: always 0
 */
int main()
{
	char *prompt = "$";
	char *lineptr = NULL;
	ssize_t nchars_read;
	size_t n = 0;

	printf("%s", prompt);
	nchars_read = getline(&lineptr, &n, stdin);
	if (nchars_read == -1)
		printf("Exitting program\n");
	else
		printf("%s\n", lineptr);
	return (0);
}
