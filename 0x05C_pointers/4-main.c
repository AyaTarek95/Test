#include <stdio.h>
int main()
{
	int n;
	int *p;

	n = 98;
	p = &n;
	printf("Adress of n : %p\n", &n);
	printf("value of p: %p\n", p);
	return (0);
}
