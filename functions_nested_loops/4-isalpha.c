#include "main.h"
/**
 * _isalpha - main function, checks for alphabetic character
 *
 *@c: input character to compare
 *
 *Return: 1/0 true/false
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
