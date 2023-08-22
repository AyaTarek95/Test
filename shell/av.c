#include <stdio.h>
/**
 * main - print av
 * @av: arguments to be printed
 * Return: always 0
 */
int main(int __attribute__((unused))ac, char **av)
{
	int i;
	
	for (i = 0; av[i] != NULL; i++)
		printf("%s\n", av[i]);
	return(0);
}
