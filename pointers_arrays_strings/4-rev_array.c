#include "main.h"

/**
 *reverse_array - reverse an array of ints
 * Return: 0
 * @a: int
 * @n: int
 */

void reverse_array(int *a, int n)
{
	int large = 0, i, j;

	for (i = 0; i < n; i++)

		large++;

	large--;
	for (i = large; i > large / 2; i--)
	{
		j = a[i];
		a[i] = a[large - i];
		a[large - i] = j;
	}
}
