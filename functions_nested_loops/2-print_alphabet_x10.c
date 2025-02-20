#include "main.h"

/**
 * print_alphabet_x10 - print 10x
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	int letter;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
			if (letter == 'z')
			_putchar ('\n');
		}
	}
}
