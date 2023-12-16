#include "monty.h"
/**
 *n_sub - substract top element
 *@stack: double pointer
 *@line_number: number of line in monty file
 *
 */
void n_sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n -= (*stack)->n;
	*stack = (*stack)->next;
	free(temp);
	(*stack)->prev = NULL;
}
