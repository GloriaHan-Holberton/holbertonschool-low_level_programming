#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - main function, entry point
 *
 * @r: input chararcter
 *
 * Return: 1/0 true/false
 */
int print_last_digit(int r)
{
	_putchar('0' + _abs(r % 10));
	return (_abs(r % 10));
}
