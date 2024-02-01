#include "monty.h"

/**
 * func_pall - ...
 * @head: This is the stack's head
 * @line_number: no used
 * Return: nothing
*/
void func_pall(stack_t **head, unsigned int line_number)
{
	stack_t *h;
	(void)line_number;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
