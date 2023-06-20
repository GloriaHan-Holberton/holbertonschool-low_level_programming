#include "main.h"

/**
 * jack_bauer - main function, entry point
 *
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	while (h <= 23)
	{
		while (m <= 59)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
			m = m + 1;
		}
		m = 0;
		h = h + 1;
	}
}
