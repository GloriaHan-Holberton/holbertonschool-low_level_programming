#include <stdio.h>
/**
 * main - entry point
 *
 * Return:always return 0
 *
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
		putchar(ch);
		}
		ch = ch + 1;
	}
	putchar('\n');
	return (0);
}
