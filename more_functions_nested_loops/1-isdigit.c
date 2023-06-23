#include "main.h"
/**
 * _isdigit - main function, checks for uppercase char.
 * @c: input  parameter to be compared
 * Return: 1/0 digit/other
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
