#include <stdio.h>

/**
 * main - the main function that uses the for loop
 *
 * Return: 0
 */

int main(void)
{
	int i;
	/* for loop execution */
	for (i = 10 ; i <= 30 ; i++)
	{
		printf("%d ,", i); /* value ends in a space amd comma */
	}
	printf("\n");
	return (0);
}
