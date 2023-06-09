#include <stdio.h>

/**
 * main - check code
 *@argc:argument count
 *@argv:argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	if (argc > 1)
		printf("%d\n", argc - 1);
	else
		printf("0\n");
	return (0);
}
