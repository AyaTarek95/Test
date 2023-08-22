#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: printed name
 * @f: pointer to functions
 * Return: always 0 if success
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);

}
