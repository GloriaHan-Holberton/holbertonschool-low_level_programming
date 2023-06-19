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
	int a = 0;

	while (a <= 9)
	{
		putchar(a + '0');
		a = a + 1;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch = ch + 1;
	}
	putchar('\n');
	return (0);
}
