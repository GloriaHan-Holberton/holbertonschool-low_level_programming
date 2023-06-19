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
	int b = 0;

	while (a < 10)
	{
		b = a + 1;
		while (b < 10)
		{
			if (a < b)
			{
				putchar(a + '0');
				putchar(b + '0');
			}
			if (a != 8 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}
			b = b + 1;
		}
		a = a + 1;
	}
	putchar('\n');
	return (0);
}
