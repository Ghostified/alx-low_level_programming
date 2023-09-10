#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of single-digit numbers
 *              in ascending order, separated by ", ".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');

		if (num < 9)
		{
			putchar(',');
			putcahr(' ');
		}

		num++
	}

	putchar('\n');

	return (0);
