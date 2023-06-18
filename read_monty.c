#include "monty.h"

/**
 * read_monty_file - actual Reader for the monty file
 * @fd: pointer to the file object to read monty codes from
*/

void read_monty_file(FILE *fd)
{
	unsigned int line_number = 0;
	char *operation;
	size_t size = 0;

	while (getline(&buff, &size, fd) != EOF)
	{
		operation = strtok(buff, " \r\t\n");
		line_number++;
		if (operation != NULL)
			if (do_monty(operation, &line_number) != 0)
				exit(EXIT_FAILURE);
	}
}
