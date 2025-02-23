#include "main.h"

/**
 *times_table - prints times tables
 * Return: 0
 */

void times_table(void)
{
	int n1, n2, n3;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 < 10; n2++)
		{
			n3 = n1 * n2;

			if (n3 / 10 != 0)
			{
			_putchar('0' + n3 / 10);
			}
			 _putchar('0' + n3 % 10);
			if (n2 < 9)
			{
			_putchar(',');
			_putchar(' ');

			if (n3 + n1  < 10)
			_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
