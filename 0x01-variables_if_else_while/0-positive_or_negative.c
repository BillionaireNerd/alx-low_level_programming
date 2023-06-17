#include <stdlib.h>
#include <time.h>

/**
 * main - doesn't need any argument
 *
 * Return: 0 means success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n");
	}
	else if (n == 0)
	{
		printf("%d is zero\n");
	}
	else if (n < 0)
	{
		printf("%d is negative")
	}
	return (0);
}
