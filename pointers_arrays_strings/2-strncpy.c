#include "main.h"

/**
 *_strncpy - copy a string
 * Return: 0
 * @dest: char
 * @src: char
 * @n: int
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *res = dest;

	while (*src != '\0' && n-- > 0)
	{
	*dest++ = *src++;
	}
	while (n-- > 0)
	{
		*dest++ = '\0';
	}
	return (res);
}
