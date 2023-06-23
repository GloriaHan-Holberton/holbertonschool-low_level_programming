#include "main.h"
/**
 * _isupper - main function, checks for uppercase char.
 *
 * Return: 1/0 Uppercaser/other
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	} else
	{
		return (0);
	}
}
