#include "monty.h"
/**
 * addqueue - is a functions to add queue
 * @head: is a pointer
 * @n: is an integer
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new, *temp;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
		new->prev = temp;
	}
}
