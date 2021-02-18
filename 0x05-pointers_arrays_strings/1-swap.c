#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: is a pointer
 * @b: is a pointer
 * @c: is a variable
 * Return: 0;
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
	return;
}
