#include "main.h"

/**
 * print_line - draws a line
 * Return: 0
 * @n: int
 */

void print_line(int n)
{
	if (n > 0)
	{
	for (; n > 0; n--)
	_putchar ('_');
	}
	_putchar('\n');
}
