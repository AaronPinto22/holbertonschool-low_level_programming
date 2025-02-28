#include "main.h"

/**
 * _strncat - link two strings but limits abouts of bytes
 * Return: 0
 * @dest: char
 * @src: char
 * @n: int
 */

char *_strncat(char *dest, char *src, int n)
{

	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
