#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - counts naturals
 * Return: 0
 * @n: int
 */

void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
	printf("%d", n);
	if (n < 98)
	putchar (',');
	putchar (' ');
	}
	putchar('\n');
}
