#include "main.h"

/**
 *_islower - lowercase check
 * Return: 1 if lowercase 0 if not
 * @c: int
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
