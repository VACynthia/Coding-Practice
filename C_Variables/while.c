#include <stdio.h>

/**
 * main - the main function that prints the alphabet
 *
 * Return: 0
 */

int main(void)
{
	char a = 'a';
	/* while loop execution */
	while (a <= 'z')
	{	/* body of while is in calibraces */
		printf("The alphabet: %c\n", a);
		a++; /* increment keeps updating the value of a */
	}
	return (0);
}
