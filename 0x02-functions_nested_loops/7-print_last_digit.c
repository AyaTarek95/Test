#include "main.h"
int print_last_digit(int n)
{
	int L;

	if (n < 0)
		L = (-n) % 10;
	
	else
		L = n % 10;

	_putchar(48 + L);
	return (L);
}
