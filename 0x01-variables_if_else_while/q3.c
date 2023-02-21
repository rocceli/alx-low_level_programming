#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int student[6];

	printf("Whats your age:");
	scanf("%i", &student[0]);
	printf("\nWhats your first mark :");
	scanf("%i", &student[1]);
	printf("\nWhats your second mark :");
	scanf("%i", &student[2]);
	printf("\nWhats your third mark :");
	scanf("%i", &student[3]);
	printf("\nWhats your forth mark :");
	scanf("%i", &student[4]);
	printf("\nWhats your fifth mark :");
	scanf("%i", &student[5]);
	printf("%i \n %i \n %i \n %i \n %i \n %i \n", student[0], student[1], student[2], student[3], student[4], student[5]);
	return (0);
}
