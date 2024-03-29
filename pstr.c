#include "monty.h"

/**
 * func_pstr - ...
 * @head: This is the stack's head
 * @line_number: line_number
 * Return: nothing
*/
void func_pstr(stack_t **head, unsigned int line_number)
{
	stack_t *h;
	(void)line_number;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
