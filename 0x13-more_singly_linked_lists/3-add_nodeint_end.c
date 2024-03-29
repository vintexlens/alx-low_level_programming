#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a listint_t
 * @head: value pointer to pointer
 * @n: value
 * Return: 0 (Success)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nend, *node;

	nend = malloc(sizeof(listint_t));
	if (nend == NULL)
	{
		return (NULL);
	}

	nend->n  = n;
	nend->next = NULL;

	if (*head == NULL)
	{
		*head = nend;
	}
	else
	{
		node = *head;
		while (node->next != NULL)
		{
			node = node->next;
		}
		node->next = nend;
	}
	return (nend);
}
