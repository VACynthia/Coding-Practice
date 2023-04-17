#include <stdio.h>

/**
 * main - printing the size, in bytes, of a pointer
 *
 * Return: always 0
 */

int main(void)
{
	int *x;

	printf("Size of a pointer: %lu\n", sizeof(x));

	return (0);
}
