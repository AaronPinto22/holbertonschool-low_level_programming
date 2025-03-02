#include "main.h"

/**
 * string_toupper - change a string from lowercase to uppercase
 * Return: 0
 * @c: char
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)

		if (c[i] >= 'a' && c[i] <= 'z')
		c[i] -= 32;

	return (c);
}
