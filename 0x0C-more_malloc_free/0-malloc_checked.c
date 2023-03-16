#include <stdlib.h>

/**
 * malloc_checked - check code
 *@b: argument
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
