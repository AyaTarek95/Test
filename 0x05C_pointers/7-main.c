#include <stdio.h>
void modify_my_param(int *m)
{
	printf("value of m : %p\n", m);
	printf("address of m : %p\n", &m);
	*m = 402;

}
int main()
{
	int n;
	int *p;

	n = 98;
	p = &n;

	printf("valure of n before call : %d\n", n);
	printf("Address of n : %p\n", &n);
	printf("valure of p : %p\n", p);
	printf("address of p : %p\n", &p);
	modify_my_param(p);
	printf("value of n after call : %d\n", n);
	return (0);
}
