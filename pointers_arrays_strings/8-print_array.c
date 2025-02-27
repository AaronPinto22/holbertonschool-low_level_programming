#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * Return: 0
 * @a: int
 * @n: int
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
	printf("%d ", a[i]);
	}
	{
	printf("\n");
	}
}
