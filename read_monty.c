#include "monty.h"

/**
 * read_monty_file - actual Reader for the monty file
 * @fd: pointer to the file object to read monty codes from
*/

void read_monty_file(FILE *fd)
{
	unsigned int line_number = 1;
	char *operation;

	while (fgets(buff, MAX_BUFF_SIZE, fd) != NULL)
	{
		if (strlen(buff) <= 1)
			continue;
		operation = strtok(buff, " \r\t\n");
		while (operation != NULL)
		{
			do_monty(operation, &line_number);
			operation = strtok(NULL, " \r\t\n");
		}
	}
}
