#include <stdio.h>

/**
 * main - prints size
 * Return: 0
 */

int main(void)
{ 
    	printf("char size: %lu bytes\n", (unsigned long)sizeof(char));
	printf("int size: %lu bytes\n", (unsigned long)sizeof(int));
	printf("long int size: %lu bytes\n", (unsigned long)sizeof(long int));
    	printf("long long int size: %lu bytes\n", (unsigned long)sizeof(long long int));
    	printf("float size: %lu bytes\n", (unsigned long)sizeof(float));
    	return (0);
}
