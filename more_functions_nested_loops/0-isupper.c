#include "main.h"

/**
 * _isupper - checks for uppercase char
 * Return: 0
 * @c: int
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
