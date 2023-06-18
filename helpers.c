#include "monty.h"

/**
 * _isdigit - checks if string consists only of numbers or not
 * @num: string of numbers
 * Return: 0 if string contains chars other than digits
 * 1 otherwise
*/

int _isdigit(char *num)
{
	int i;

	for (i = 0; num[i]; i++)
		if (num[i] < 48 || num[i] > 57)
			return (0);
	return (1);
}
