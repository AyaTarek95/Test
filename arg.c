#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i, sum;

	printf("argc = %d\n", argc);
	printf("lets see what is in argv\n");
	if (argc > 1)
	{
	for ( i = 1; i < argc; i++)
	{	
		printf("argv[%d] is : \"%s\".\n", i, argv[i]);
		sum += atoi(argv[i]);
		}
	printf("sum = %d\n",sum);
	}
	return (0);
}
