#include <stdio.h>

/**
 *main - prints alphabet
 *Return: 0
 */

int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
{
putchar (letter);
}
putchar ('\n');
return (0);
}
