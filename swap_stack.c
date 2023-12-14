#include "monty.h"

/**
 * swap - Function to swap two elementsbin a satack
 *
 * Return: void
 */

void swap(stack_t *s)
{
	int temp;

	if (s->top < 1)
	{
		printf("L 2: can't swap, stack too short\n");
		exit(EXIT_FAILURE);
	}

	temp = s->stack[s->top];
	s->stack[s->stop] = s->stack[->top - 1];
	s->stack[s->top - 1] = temp;
}
