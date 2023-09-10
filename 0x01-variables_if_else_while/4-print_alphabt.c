#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints lowercase letters from 'a' to 'z' excluding 'e' and 'q'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
	{
		putchar(c)
	}
		c++;
	}

	putchar('\n');

	return (0);
}
