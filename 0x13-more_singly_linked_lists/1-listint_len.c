#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked
 * @h: value
 * Return: 0 (Success)
 */
size_t listint_len(const listint_t *h)
{
	int node;

	node = 0;
	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
