#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * Return: 0
 * @a: int
 * @b: int
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
