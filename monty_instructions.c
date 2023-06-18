#include "monty.h"

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
			*line_number += 1;
			return (EXIT_SUCCESS);
		}
		i++;
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", *line_number, op_code);
	strtok(NULL, " \r\t\n");
	*line_number += 1;
	return (EXIT_FAILURE);
}
