#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pinter to the first node of the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *Nod;

	while (head != NULL)
	{
		Nod = head;
		head = head->next;
		free(Nod);
	}
}
