#include "main.h"

/**
 *_strcmp - compare two strings
 * Return: 0
 * @s2: char
 * @s1: char
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 != '\0' && *s2 != '\0' && !i)
	{
		i = *s1 - *s2;
		s1++;
		s2++;
	}

	{
	if (i != 0)
	{
		return (i);
	}
	else if
	(*s1 != '\0')
	{
		return (*s1 - '0');
	}
	else if
	(*s2 != '\0')
	{
		return (-(*s2 - '0'));
	}
	else
		return (i);
	}
}
