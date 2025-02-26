#include "main.h"

/**
 *print_triangle - prits a trianglei
 *Return: 0
 *@size: size of each face
 */

void print_triangle(int size)
{
	int n, i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (n = 1; n <= size; n++)
	{
		for (i = 0; i < size - n; i++)
		{
			_putchar(' ');
		}
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
