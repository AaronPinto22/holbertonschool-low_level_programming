#include "main.h"

/**
 * leet - prints in l337
 * Return: 0
 * @a: char
 */

char *leet(char *a)
{
	char *ptr = a;
	char c[] = "aAeEoOtTlL";
	char n[] = "4433007711";
	int i;

	while (*ptr)
	{
		for (i = 0; c[i]; i++)
		{
		if (*ptr == c[i])
			{
			*ptr = n[i];
			break;
			}
		}
		ptr++;
	}
	return (a);
}
