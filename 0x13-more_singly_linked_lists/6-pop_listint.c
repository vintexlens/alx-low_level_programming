#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: pointer value
 * Return: Always 0 (Success)
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (*head)
	{
		n = (*head)->n;
		node = (*head)->next;
		free(*head);
		*head = node;
		return (n);
	}
	return (0);
}
