#include "monty.h"

/**
 * read_monty_file - actual Reader for the monty file
 * @fd: pointer to the file object to read monty codes from
*/

void read_monty_file(FILE *fd)
{
	unsigned int line_number = 1;
	char *operation;
	size_t size = 0;

	while (getline(&buff, &size, fd) != EOF)
	{
		if (strlen(buff) <= 1)
			continue;
		operation = strtok(buff, " \r\t\n");
		if (operation != NULL)
		{
			do_monty(operation, &line_number);
			line_number++;
		}
	}
}
