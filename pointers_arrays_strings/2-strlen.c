#include "main.h"

/**
 * _strlen - return string lenght
 * Return: 0
 * @s: char
 */

int _strlen(char *s)
{
	char *p = s;

	while (*p)
	{
	++p;
	}
	return (p - s);
}
