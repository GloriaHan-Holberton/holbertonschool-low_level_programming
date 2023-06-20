#include "main.h"
/**
 * _islower - main function, entry point
 *
 * @c: input chararcter to compare
 *
 * Return: 1/0 true/false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
