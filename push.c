#include "monty.h"
/**
 * push - add node to the stack
 * @head: stack head
 * @line_number: line_number
 * Return: no return
*/
void push(stack_t **head, unsigned int line_number)
{
	int n, j = 0, flag = 0;

	if (cmd.arg)
	{
		if (cmd.arg[0] == '-')
			j++;
		while (cmd.arg[j] != '\0')
		{
			if (cmd.arg[j] > 57 || cmd.arg[j] < 48)
				flag = 1;
			j++;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			terminate(*head);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		terminate(*head);
	}
	n = atoi(cmd.arg);
	if (cmd.s_q_flag == 0)
		addStack(head, n);
	else
		addqueue(head, n);
}
