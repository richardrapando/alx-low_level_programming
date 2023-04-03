#include "lists.h"

/**
 * add_nodeint_end - function that adds a new
 *                   node at the end of a listint_t list
 * @head: pointer
 * @n: number
 *
 * Return: the address of the new element
 *         Otherwise - NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
