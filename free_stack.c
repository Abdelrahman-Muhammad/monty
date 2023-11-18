#include "monty.h"
/**
 * free_stack -  is a func to free stack
 * @head: is a pointer
 */
void free_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
