#include "lists.h"

/**
 * print_listint -  function that prints all the elements of a listint_t list
 * @h: value
 * Return: 0 (Success)
 */
size_t print_listint(const listint_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
