#include "lists.h"

/**
 * print_listint - prints elements of a list
 * @h: head of list
 *
 * Return: numbers of the nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
