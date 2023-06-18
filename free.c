#include "monty.h"

void free_stack(stack_t **stack)
{
	stack_t *head = *stack;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			head = head->next;
			free(head->prev);
		}
		free(head);
	}
}

void free_buff(char *buff)
{
	if (buff != NULL)
		free(buff);
}
