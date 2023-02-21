#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int student[6];

	for (int i = 0; i <= sizeof(student); i++)
	{
		printf("\nPlease enter value %i :", i);
		scanf("%i", &student[i]);
	}
	for (int i = 0; i <= sizeof(student); i++)
		printf("%i/n", student[i]);
	return (0);
}
