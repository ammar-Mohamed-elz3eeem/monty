#include "monty.h"

/**
 * do_pop - this function will delete last element in stack
 * @stack: pointer to the stack
 * @line_number: current line number in monty file
*/

void do_pop(stack_t **stack, __attribute__((__unused__))
				unsigned int line_number)
{
	stack_t *head = *stack;
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->next != NULL)
	{
		head = (*stack)->next;
		head->prev = NULL;
		free((*stack)->prev);
		*stack = head;
	} 
	else
	{
		stack = NULL;
	}
}
