#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - Entry point
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int k;

	srand(time(0));
	k = rand() - RAND_MAX / 2;


	if (k > 0)
	{
		printf("%i is positive\n", k);
	}
	else if (k == 0)
	{
		printf("%i is zero\n", k);
	}
	else if (k < 0)
	{
		printf("%i is negative\n", k);
	}
	return (0);
}
