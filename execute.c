#include "monty.h"
/**
* @content: line content
* execute - executes the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: poiner to monty file
* Return: no return
*/
int execute(char *content, stack_t **stack, unsigned int counter)
{
	instruction_t inst[] = {
				{"push", push}, {"pall", pall}, 
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");

	if (op && op[0] == '#')
		return (0);
	cmd.arg = strtok(NULL, " \n\t");
	while (inst[i].opcode && op)
	{
		if (strcmp(op, inst[i].opcode) == 0)
		{	inst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && inst[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		terminate(*stack);
	}
	return (1);
}
