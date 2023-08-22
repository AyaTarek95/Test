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
		c = 'A';
	while (c >= 'A' && c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
