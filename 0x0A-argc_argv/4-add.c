#include "main.h"
int main(int argc, char **argv)
{
	int i, sum;


	if (argc >= 3)
	{
		for (i = 1; i < argc; i++)
		{
			 if (atoi(argv[i]) >= '0' && atoi(argv[i]) <= '9')
                           {  sum += atoi(argv[i]);
			
			   } else 
			 {
 				printf("Error\n");
                                return (1);
			 }
			   }
		 printf("%d\n", sum);
	}
	if (argc == 1)
	{
		printf("0\n");
	}

return (0);
}
