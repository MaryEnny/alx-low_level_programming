#include "lists.h"


/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
	unsigned int m;
	listint_t *e;
	listint_t *p = *head;

	e = malloc(sizeof(listint_t));
	if (!e || !head)
		return (NULL);
	e->n = n;
	e->next = NULL;
	if (idx == 0)
	{
		e->next = *head;
		*head = e;
		return (e);
	}
	for (m = 0; p && m < idx; m++)
	{
		if (m == idx - 1)
		{
			e->next = p->next;
			p->next = e;
			return (e);
		}
		else
			p = p->next;
	}
	return (NULL);
}
