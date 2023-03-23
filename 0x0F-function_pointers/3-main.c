#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0 or 98 or 99 or 100
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char operator;
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = *argv[2];
	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	calc = get_op_func(argv[2]);
	if (calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = calc(num1, num2);
	printf("%d\n", result);
	return (0);
}
