#include "main.h"

/**
 * print_alphabet - point entry
 *
 * Return: void
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch = ch + 1;
	}
	_putchar('\n');
}
