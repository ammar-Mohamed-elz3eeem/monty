#include "monty.h"

int type = 01;
stack_t *stack[MAX_STACK_SIZE];
char buff[MAX_BUFF_SIZE];

int main(int argc, char *argv[])
{
	FILE *file = NULL;
	
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	read_monty_file(file);
	free_stack(stack);
	fclose(file);
	return (EXIT_SUCCESS);
}
