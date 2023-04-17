#include <stdio.h>

/**
 * main - dereferencing pointers: manipulating values stored in the memory address
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	int *j;

	i = 43;
	j = &i;

	printf("Value of variable 'i': %d\n", i);
	printf("Address of variable 'i': %p\n", &i);
	printf("Value of pointer 'j': %lu\n", sizeof(j));
	printf("Address of pointer 'j': %p\n", &j);

	*j = 381;

	printf("Value of variable 'i': %d\n", i);
	printf("Address of variable 'i': %p\n", &i);

	return (0);
}
