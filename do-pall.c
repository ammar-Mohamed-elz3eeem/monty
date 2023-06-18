#include "monty.h"

/**
 * do_pall - this function will show all elements in stack or queue
 * @stack: pointer to the stack
 * @line_number: current line number in monty file
*/

void do_pall(stack_t **stack, __attribute__((__unused__))
				unsigned int line_number)
{
	stack_t *tmp = *stack;

	if (tmp == NULL)
		return;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
