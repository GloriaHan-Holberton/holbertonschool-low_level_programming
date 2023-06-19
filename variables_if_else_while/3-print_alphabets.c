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
	char chUp = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch = ch + 1;
	}
	while (chUp <= 'Z')
	{
		putchar(chUp);
		chUp = chUp + 1;
	}
	putchar('\n');
	return (0);
}
