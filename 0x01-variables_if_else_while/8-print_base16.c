#include <stdio.h>

/**
 * main - no arg
 *
 * Return: 0 success
 */
int main(void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	for (d = 'a'; d <= 'f'; d++)
	{
		putchar(d);
	}
	putchar('\n');

	return (0);
}
