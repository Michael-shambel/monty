#include "monty.h"
/**
 *exe_instruction - is dunction which intiate the task
 *@opcode: operation intraction
 *@arg: argument
 *@line_track: line number of argument
 *
 *Return: nothing
 */
void exe_instruction(char *opcode, char arg, unsigned int line_track)
{
	instruction_t instructions[] = {
		{"push", &push},
		{"pall", &pall},
		{NULL, NULL}
	};

	int i = 0;

	while (instructions[i].opcode != NULL)
	{
		if (strcmp(instructions[i].opcode, opcode) == 0)
		{
			if (strcmp(opcode, "push") == 0)
			{
				if (arg == NULL)
				{
					fprintf(stderr, "L%d: usage: push integer\n", line_track);
					exit(EXIT_FAILURE);
				}
				int num = atoi(arg);

				instructions[i].f(&stack, line_track);
				return;
			}
			else
			{
				instructions[i].f(&stack, line_teack);
				return;
			}
		}
		i++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
