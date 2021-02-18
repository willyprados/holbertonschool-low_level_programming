#include <stdio.h>
#include <stdlib.h>

/**
 * swap_int - swaps the values of two integers
 * @a: is a pointer
 * @b: is a pointer
 * @c: is a variable
 * Return: 0;
 */
int main()
{
	int a = 98;
	int b = 42;
	int c;         

	printf("a=%d, b=%d\n", a, b);

	c = *&a;
	a = *&b;
	b = c;

	printf("a=%d, b=%d\n", a, b);
	return (0);
}
