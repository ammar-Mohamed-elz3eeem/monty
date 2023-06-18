#include "monty.h"

/**
 * do_monty - check the operation needed to be done (push, pop, pall)
 * on either stack or queue
 * @op_code: operation code
 * @line_number: pointer to the current line being read
 * Return: 0 on success, 1 otherwise
*/

int do_monty(char *op_code, unsigned int *line_number)
{
	int i = 0;
	instruction_t instructions[3] = {
		{ "push", do_push },
		{ "pall", do_pall },
		{ NULL, NULL }
	};

	while (instructions[i].opcode != NULL)
	{
		if (strcmp(instructions[i].opcode, op_code) == 0)
		{
			instructions[i].f(stack, *line_number);
			return (EXIT_SUCCESS);
		}
		i++;
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", *line_number, op_code);
	strtok(NULL, " \r\t\n");
	exit(EXIT_FAILURE);
	return (EXIT_FAILURE);
}
