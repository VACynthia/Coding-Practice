#include <stdio.h>

/**
 * main - An array is not a pointer
 * Value of array = address of first element of the array
 *
 * Return:  always 0
 */

int main(void)
{
	int a[25]; /* array */

	printf("Value of a: %p\n", a);
	printf("Address of 'a[0]': %p\n", &a[0]);

	return (0);
}
