#include <stdio.h>

/**
 * main - no argument
 *
 * Return: 0 means success
 */
int main(void)
{
	char d, D;

	for (d = 'a'; d <= 'z'; d++)
	{
	putchar(d);
	}
	for (D = 'A'; D <= 'Z'; D++)
	{
	putchar(D);
	}

	putchar('\n');

	return (0);
}
