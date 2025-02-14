#include <stdio.h>

/**
 * main - prints size
 * Return: 0
 */

int main(void)
{
    printf("char size: %zu byte(s)\n", sizeof(char));
    printf("int size: %zu bytes\n", sizeof(int));
    printf("long int size: %zu byte(s)\n", sizeof(long));
    printf("long long int size: %zu byte(s)\n", sizeof(long long int));
    printf("float size: %zu byte(s)\n", sizeof(float));
    return (0);
}
