#include "main.h"

/**
 * puts_half - prints half a string
 * Return: 0
 * @str: char
 */

void puts_half(char *str)
{
	int i, j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		j++;
	}
	if (j % 2 == 1)
	{
		j++;
	}
	for (i = j / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
