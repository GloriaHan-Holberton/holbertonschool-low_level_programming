#include "main.h"
/**
 * printChar - prints a line with the size number times charactors,
 * the ith line times of the charactor # in the end of the line
 *@total_lines: the size passed in from the function print_triangle
 *@num_char: the number times of char # should be printed
 */
void printChar(int total_lines, int num_char)
{
	int n;

	n = 1;
	while (n <= total_lines)
	{
		if (n < (total_lines - num_char))
		{
			_putchar(' ');
		} else
		{
			_putchar('#');
		}
		n = n + 1;
	}
	_putchar('\n');
}
/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int i;

	i = 0;
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		while (i < size)
		{
			printChar(size, i);
			i = i + 1;
		}
	}
}
