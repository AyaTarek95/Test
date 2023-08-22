#include "main.h"
/**
*_strlen - Entry point
*
*Description: A C program that prints with put function
*@s: 1st
*Return: Always 0 (success)
*/
int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;
	return (counter);
}
