#include <stdio.h>

/**
 * main - program that asks user of name and age
 * Return: 0
 */

int main(void)
{
	char Name[40]; /* Maximum characters that the name can contain */
	int Age;

	printf("What is your name? "); /* %s identifies the response as a script */
	scanf("%s", Name); /* scanf used to detect user's response */
	printf("How old are you? ");
	scanf("%d", &Age); /* &Age to display the age as an integer */

	printf("Hello, %s! You are %d years old!\n", Name, Age);
	return (0);
}
