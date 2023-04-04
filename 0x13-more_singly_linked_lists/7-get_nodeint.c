#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: pointer value
 * @index: value.
 * Return: 0 (Success)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	node = head;
	while (i < index && node != NULL)
	{
		node = node->next;
		i++;
	}
	if (i != index)
	{
		return (NULL);
	}
	return (node);
}
