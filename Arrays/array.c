#include <stdio.h>

/**
 * main - Accessing the different elements of an array
 *
 * Return: always 0
 */

int main(void)
{
	int x[5];

	x[0] = 98;
	x[1] = 198;
	x[2] = 298;
	x[3] = 398;
	x[4] = 498;

	printf("Value of x[0]: %d\n", x[0]);
	printf("Value of x[1]: %d\n", x[1]);
	printf("Value of x[2]: %d\n", x[2]);
	printf("Value of x[3]: %d\n", x[3]);
	printf("Value of x[4]: %d\n", x[4]);

	printf("Address of 'x[0]': %p\n", &(x[0]));
	printf("Address of 'x[1]': %p\n", &(x[1]));
	printf("Address of 'x[2]': %p\n", &(x[2]));
	printf("Address of 'x[3]': %p\n", &(x[3]));
	printf("Address of 'x[4]': %p\n", &(x[4]));

	return (0);
}
