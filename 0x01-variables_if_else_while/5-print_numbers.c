/**
 * main - Entry point of the program
 *
 * Description: Prints all single-digit numbers of base 10
 *              starting from 0, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}

	putchar('\n');

	return (0); /*return value*/
}
