#include "monty.h"
/**
* free_stack - frees to a doubly linked list
* @head: head of a stack
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
