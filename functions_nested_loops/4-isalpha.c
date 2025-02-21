#include "main.h"

/**
 *_isalpha - alpha check
 * Return: 1 if letter
 * @c: letter
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}

	return (0);
}
