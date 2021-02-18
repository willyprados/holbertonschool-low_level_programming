#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @a: is a pointer
 * @b: is a pointer
 * @c: is a variable
 * Return: swap_int;
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
