#include <stdio.h>
/**
 * main - entry point
 *
 * Return:always return 0
 *
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		a = a + 1;
	}
	putchar('\n');
	return (0);
}
