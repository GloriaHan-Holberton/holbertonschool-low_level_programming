#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: the number of times the character _ should be printed
*/

void print_line(int n)
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
			_putchar('_');
			i = i + 1;
		}
		_putchar('\n');
	}
	}
