#include "monty.h"

/**
 * do_pint - this function will print last element in stack or queue
 * @stack: pointer to the stack
 * @line_number: current line number in monty file
*/

void do_pint(stack_t **stack, __attribute__((__unused__))
				unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
