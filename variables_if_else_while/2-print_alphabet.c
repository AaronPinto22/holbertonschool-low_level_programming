#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - prints alphabet
 *Return: 0
 */

int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
	putchar (letter);
}
return (0);
}
