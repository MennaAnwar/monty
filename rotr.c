#include "monty.h"
/**
  *rotr- rotates the stack to the bottom
  *@head: stack head
  *@line_number: line_number
  *Return: no return
 */
void rotr(stack_t **head, __attribute__((unused)) unsigned int line_number)
{
	stack_t *tmp;

	tmp = *head;

	if (*head == NULL || (*head)->next == NULL)
		return;

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = *head;
	tmp->prev->next = NULL;
	tmp->prev = NULL;
	(*head)->prev = tmp;
	(*head) = tmp;
}
