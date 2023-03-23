#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0 or 2 or 1
 */

int main(int argc, char *argv[])
{
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	/* soon */
	return (0);
}
