#include "monty.h"

/**
 * free_stack - frees stack from all values in it
 * @stack: pointer to stack array
*/

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

/**
 * free_buff - frees the buffer in the program
*/

void free_buff(void)
{
	if (buff != NULL)
		free(buff);
}
