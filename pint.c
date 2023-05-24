#include "monty.h"
/**
 * pint - prints the top of stack
 * @head: stack head
 * @line_number: line_number
 * Return: no return
*/
void pint(stack_t **head, unsigned int line_number)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		fclose(cmd.file);
		free(cmd.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
