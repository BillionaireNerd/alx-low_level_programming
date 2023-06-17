#include <stdio.h>

/**
 * main - no arg
 *
 * Return: 0 success
 */

int main(void)
{
	char den;

	for (den = 'a'; den <= 'z'; den++)
	{
		putchar(den);
	}
	putchar('\n');
	return (0);
}
