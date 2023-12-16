#include "monty.h"

/**
<<<<<<< HEAD
 *n_add - this is node help to add
 *@stack: Double pointer to the top of the stack.
 *@line_number: Line number in the Monty file
 *
 * Return: nothing
=======
 * n_add - Function that adds element to the stack
 * @stack: pointer to the stack
 * @line_number: line number
 * Return: void
>>>>>>> c1e660b915e0ba5025787dd617ec019bd1983735
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
