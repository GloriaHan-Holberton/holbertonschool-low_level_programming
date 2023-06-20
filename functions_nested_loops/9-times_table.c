#include "main.h"

/**
 * times_table - main function
 *
 */
void times_table(void)
{
	int n = 0;
	int i = 0;

	while (i <= 9)
	{
		while (n <= 9)
		{
			int product = n * i;

			if (product < 10 && n != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			} else if (product >= 10 && n != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');			}
			if (n == 0)
			{
				_putchar(product + '0');
			}
			n = n + 1;
		}
		_putchar('\n');
		i = i + 1;
		n = 0;
	}
}
