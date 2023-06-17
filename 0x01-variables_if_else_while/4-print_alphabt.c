#include <stdio.h>
/**
 * main - no arg
 *
 * Return: 0
 */
int main(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
	{
	if (d != 'q' && d != 'e')
	{
		putchar(d);
	}
	}
	putchar('\n');

	return (0);
}
