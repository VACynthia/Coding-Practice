#include <stdio.h>

/**
 * main - the main function
 * @area: parameter
 * @l: parameter for length
 * @w: parameter for width
 * Return: 0
 */

int main(int l, char w, char area)
{
	int area;

	area = l * w;

	printf("What is the length of the rectangle? ");
	scanf("%d\n", &l);
	printf("What is the width of the rectangle? ");
	scanf("%d\n", &w);

	printf("The area of the rectangle is %d\n", area);
	return (0);
}
