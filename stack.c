#include "monty.h"
/**
 * _stack - prints the top
 * @head: stack head
 * @line_number: line_number
 * Return: no return
*/
void _stack(__attribute__((unused)) stack_t **head,
	__attribute__((unused)) unsigned int line_number)
{
	cmd.s_q_flag = 0;
}

/**
 * addStack - add node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: no return
*/
void addStack(stack_t **head, int n)
{

	stack_t *new_node, *tmp;

	tmp = *head;
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (tmp)
		tmp->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
