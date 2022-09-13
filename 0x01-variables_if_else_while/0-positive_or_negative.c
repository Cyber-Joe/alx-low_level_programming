#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*to print positive*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	/*to print zero*/
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	/*to print negative*/
	else
	{
		printf("%d is negative\n", n);
	}
	/*end program*/
	return (0)
}
