#include "monty.h"

int _isdigit(char *num)
{
	int i;
	
	for (i = 0; num[i]; i++)
		if (num[i] < 48 || num[i] > 57)
			return (0);
	return (1);
}
