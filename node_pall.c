#include "monty.h"
/**
 *
 *
 *
 *
 */

void n_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
	(void)line_number;
}
