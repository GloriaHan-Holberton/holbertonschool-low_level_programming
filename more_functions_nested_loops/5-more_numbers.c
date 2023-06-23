#include "main.h"
/**
 * numbersOneline - function to print 0 - 14 in a line
*/

void numbersOneline(void)
{
	int i;

	i = 0;
	while (i <= 14)
	{
		if (i >= 10)
		{
			_putchar('0' + i / 10);
		}
		_putchar('0' + i % 10);
		i = i + 1;
	}
}

/**
 * more_numbers - function to print 10 times numbersOneline
 */

void more_numbers(void)
{
	int n;

	n = 0;
	while  n <= 9)
	{
		numbersOneline();
		_putchar('\n');
		n = n + 1;
	}
}
