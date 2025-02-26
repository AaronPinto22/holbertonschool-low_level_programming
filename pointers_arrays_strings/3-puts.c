#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * Return: 0
 * @str: int
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
