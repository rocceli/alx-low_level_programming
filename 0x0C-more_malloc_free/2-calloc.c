#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each bytes
 *
 * Return: pointer to memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	unsigned int a;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	for (a = 0; a < (nmemb * size); a++)
		((char *)mem)[a]  = 0;
	return (mem);
}
