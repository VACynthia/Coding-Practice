#include <stdio.h>

/**
 * main - storing the address of variable into pointer
 *
 * Return: always 0
 */

int main(void)
{
	int k;
	int *j;

	k = 53;
	j = &k;

	printf("Address of 'k': %p\n", &k);
	printf("Value of 'j': %p\n", j);

	return (0);
}
