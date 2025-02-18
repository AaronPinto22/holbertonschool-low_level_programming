#include <stdio.h>

/**
 *main - prints alphabet
 *Return: 0
 */

int main(void)
{
int i, x;
for (i = 0; i <= 9; i++)
{
for (x = 0; x <= 9; x++)
{
if (i != x)
{
putchar(i + '0');
putchar(x + '0');
putchar(',');
}
}
}
putchar (' ');
return (0);
}
