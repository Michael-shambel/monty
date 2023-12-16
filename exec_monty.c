#include "monty.h"
/**
 *exec_monty - open and excute monty file
 *@filename: name of monty file
 *@instructions: An array of instruction structures.
 *
 * Return: On success, returns EXIT_SUCCESS. On failure to open the file or if
 * an unknown instruction is encountered, returns EXIT_FAILURE.
 */
int  exec_monty(const char *filename, instruction_t instructions[])
{
	char temp[300];
	unsigned int line_number = 1;
	stack_t *stack = NULL;
	FILE *file;
	int x = 0;

	file = fopen(filename, "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		return (EXIT_FAILURE);
	}

	while (fgets(temp, sizeof(temp), file) != NULL)
	{
		char *opcode = strtok(temp, " \n\t");

		if (opcode == NULL || opcode[0] == '#')
		{
			line_number++;
			continue;
		}

		for (x = 0; instructions[x].opcode != NULL; x++)
		{
			if (strcmp(opcode, instructions[x].opcode) == 0)
			{
				instructions[x].f(&stack, line_number);
					break;
			}
		}
		if (instructions[x].opcode == NULL)
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
			fclose(file);
			return (EXIT_FAILURE);
		}
		line_number++;
	}
	fclose(file);
	return (EXIT_SUCCESS);
}
