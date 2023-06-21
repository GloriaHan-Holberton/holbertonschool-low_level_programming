#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - main function
 *@n: input char;
 */
void print_to_98(int n)
{
	int i = n;

	if (n >= 98)
	{
		while (i >= 98)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
			i = i - 1;
		}
	} else
	{
		while (i <= 98)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
			i = i + 1;
		}
	}
	printf("\n");
}
