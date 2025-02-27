#include "main.h"

/**
 * print_rev - prints in reverse
 * Return: 0
 * @s: char
 */

void print_rev(char *s)
{
	int i = 0, n;

	while (s[i] != '\0')
	{
		i++;
	}
	for (n = i - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
