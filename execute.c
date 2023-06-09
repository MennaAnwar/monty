#include "monty.h"
/**
* execute - executes the opcode
* @content: line content
* @stack: head linked list - stack
* @line_number: line_number
* Return: no return
*/
int execute(char *content, stack_t **stack, unsigned int line_number)
{
	instruction_t inst[] = {
				{"push", push}, {"pall", pall},
				{"pint", pint}, {"pop", pop},
				{"swap", _swap}, {"add", add},
				{"nop", nop}, {"sub", sub},
				{"div", divide}, {"mul", mul},
				{"mod", mod},
				{"stack", _stack}, {"queue", _queue},
				{"pchar", pchar}, {"pstr", pstr},
				{"rotl", rotl}, {"rotr", rotr},
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
		{	inst[i].f(stack, line_number);
			return (0);
		}
		i++;
	}
	if (op && inst[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, op);
		terminate(*stack);
	}
	return (1);
}
