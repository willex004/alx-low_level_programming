#include "lists.h"

/**
 * reverse_listint - reverse a listint_t
 * @head: address of node
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *nex_t;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;

	while ((*head)->next != NULL)
	{
		nex_t = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		&head = nex_t;
	}
	(*head)->next = prev;

	return (*head);
}
