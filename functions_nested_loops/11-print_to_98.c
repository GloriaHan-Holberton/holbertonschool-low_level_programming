#include "main.h"
/**
 * print_to_98 - main function
 *@n: input char;
 */
void print_to_98(int n)
{
	int i = n;

	if (n >= 98)
	{
		while (i >= 98)
		{
			if (i >= 100)
			{
				_putchar('0' + i / 100);
				_putchar('0' + (i - 100) / 10);
				_putchar('0' + i % 10);
			} else
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			}
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			i = i - 1;
		}
	}
	else
	{
		while (i <= 98)
		{
			if (i >= 10)
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			} else if (i >= 0 && i < 10)
			{
				_putchar('0' + i);
			} else if (i >= -9 && i < 0)
			{
				_putchar('-');
				_putchar('0' - i);
			} else
			{
				_putchar('-');
				_putchar('0' - i / 10);
				_putchar('0' - i % 10);
			}
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			i = i + 1;
		}
	}
	_putchar('\n');
}
