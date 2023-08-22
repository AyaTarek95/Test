#include "main.h"
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return(support_fn(n, 0));
}
int support_fn(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (suuport_fn(n, i + 1));
}
