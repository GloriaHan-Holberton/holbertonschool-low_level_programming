#include "main.h"
/**
 * printChar - function to print k times the character '\'
 * @k: the number of times the character \ should be printed
*/
void printChar(int k)
{
	int i = 0;

	while (i < k)
	{
		_putchar(' ');
		i = i + 1;
	}
	_putchar('\\');
	_putchar('\n');
}

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of lines printed
*/

void print_diagonal(int n)
{
	int i;

	i = 0;
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		while (i < n)
		{
			printChar(i);
			i = i + 1;
		}
	}
}
