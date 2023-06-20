#include "main.h"

/**
 * print_alphabet_x10 - point entry
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char ch = 'a';
	char n = 0;

	while (n <= 9)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch = ch + 1;
		}
		_putchar('\n');
		n = n + 1;
		ch = 'a';
	}
}
