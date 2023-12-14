#include "monty.h"

/**
 * n_add - Function that adds element to the stack
 * @stack: pointer to the stack
 * @line_number: line number
 * Return: void
 */
void n_add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n += (*stack)->n;
	        *stack = (*stack)->next;
		free(temp);
		(*stack)->prev = NULL;
}
