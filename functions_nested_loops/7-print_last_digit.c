#include "main.h"

/**
 * print_last_digit - prinst last digit
 * Return: 1
 * @n: int
 */

int print_last_digit(int n)
{
	int i =  n % 10;

	if (i < 0)
	{
		i = -i;
	}
	_putchar('0' +  i);
	return (i);
}
