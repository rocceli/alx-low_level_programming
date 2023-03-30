#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of elements printed
 */
size_t list_len(const list_t *h)
{
	size_t g = 0;

	while (h)
	{
		g++;
		h = h->next;
	}
	return (g);
}
