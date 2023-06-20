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

			if (product < 10)
			{
				_putchar(product + '0');
			} else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			if (n != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			n = n + 1;
		}
		_putchar('\n');
		i = i + 1;
		n = 0;
	}
}
