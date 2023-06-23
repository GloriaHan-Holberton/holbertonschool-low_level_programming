#include "main.h"
/**
 * _isupper - main function, checks for uppercase char.
 * @c: input  parameter to be compared
 * Return: 1/0 Uppercaser/other
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
