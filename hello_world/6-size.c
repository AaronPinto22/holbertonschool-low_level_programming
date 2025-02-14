#include <stdio.h>

/**
 * main - prints size
 * Return: 0
 */

int main(void)
{
    printf("char size: %lu bytes\n", sizeof(char));
    printf("int size: %lu bytes\n", sizeof(int));
    printf("long int size: %lu bytes\n", sizeof(long));
    printf("long long int size: %lu bytes\n", sizeof(long long int));
    printf("float size: %lu bytes\n", sizeof(float));
    return (0);
}
