#ifndef __MONTY__
#define __MONTY__

#define MAX_STACK_SIZE 512
#define MAX_BUFF_SIZE 4098

#include "structs.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/fcntl.h>

extern stack_t *stack[MAX_STACK_SIZE];
extern char *buff;
extern int type;

void read_monty_file(FILE *fd);
int do_monty(char *op_code, unsigned int *line_number);
void do_push(stack_t **stack, unsigned int line_number);
void do_pall(stack_t **stack, unsigned int line_number);
void free_stack(stack_t **stack);
void free_buff(void);
int _isdigit(char *num);

#endif
