#include "main.h"
/**
 * print_one_line - prints n times the char # in a line
 * @n: the number of times
 */
void print_one_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('#');
		i = i + 1;
	}
	_putchar('\n');
}

/**
 * print_square - prints a square, followed by a new line
 * @size: the size of the square
 */

void print_square(int size)
{
	int i;

	i = 0;
	if( size <= 0)
	{
		_putchar('\n');
	}
	while ( i < size)
	{
		print_one_line(size);
		i = i + 1;
	}
}
