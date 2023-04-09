#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0
 */

int main(void)
{
	int age; /* unsigned used because age cannot be negative */

	printf("Please enter you age\n");
	scanf("%d", &age); /* scanf used to detect response, & used to identify age as an integer */

	if (age < 30) /* the main condition */
	{
		printf("Hey, you are pretty young!\n");
	}
	else if (age == 30) /* introduces a new condition */
	{
		printf("You are not getting any younger\n");
	}
	else /* dictates what happens when both preceding conditions are false */
	{
		printf("You are getting old, my dear\n");
	}
	return (0);
}
