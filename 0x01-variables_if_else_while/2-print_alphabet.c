#include <stdio.h>
int main()
{
	char c;
	c = 'a';
	while (c >= 'a' && c <= 'z')
	{

		putchar(c);
		c++;
	}
	/*for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}*/
	putchar('\n');
	return (0);
}
