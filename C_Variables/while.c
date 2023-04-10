#include <stdio.h>

/**
 * main - the main function that prints the alphabet
 *
 * Return: 0
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		printf("The alphabet: %c\n", a);
		a++;
	}
	return (0);
}
