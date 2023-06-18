#include "monty.h"

/**
 * do_push - add new elemnt to stack or queue
 * @stack: pointer to the stack
 * @line_number: current line number in monty file
*/

void do_push(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;
	stack_t *head = *stack;
	char *num;

	num = strtok(NULL, " \r\t\n");
	if (num == NULL || (_isdigit(num) == 0 && num[0] != '-'))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	tmp = malloc(sizeof(stack_t));
	if (tmp == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	tmp->n = atoi(num);
	if (*stack == NULL || type == 01)
	{
		tmp->next = *stack;
		tmp->prev = NULL;
		if (*stack)
			(*stack)->prev = tmp;
		*stack = tmp;
	}
	else
	{
		while (head->next)
			head = head->next;
		head->next = tmp;
		tmp->next = NULL;
		tmp->prev = head;
	}
}
