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
	int k,s,j;
	time_t t;

	srand(time(&t));
	k = rand() % (98 + 1 - (-128)) + (-128);
	j = rand() % (98 + 1 - (-128)) + (-128);
	s = rand() % (98 + 1 - (-128)) + (-128);


	if (k > 0)
	{
		printf("%i is positive\n", k);
	}
	if (j == 0)
	{
		printf("%i is zero\n", j);
	}
	if (s < 0)
	{
		printf("%i is negative\n", s);
	}
	return (s);
}
