#include <stdio.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the lowercase alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l = 'z';

	while (l >= 'a')
	{
		putchar(l);
		l--;
	}

	putchar('\n');

	return (0);
}
