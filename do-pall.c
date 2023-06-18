#include "monty.h"

void do_pall(stack_t **stack, __attribute__((__unused__)) unsigned int line_number)
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
