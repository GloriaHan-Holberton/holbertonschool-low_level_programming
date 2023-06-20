#include "main.h"
/**
 * _abs - main function, entry point
 *
 * @r: input chararcter to compare
 *
 * Return: 1/0 true/false
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	return (r * -1);
}
