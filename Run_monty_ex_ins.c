#include "monty.h"
/**
 *r_monty_and_exe_ins - read monty and execute instruction
 *@f_name: Monty file name 
 *
 *Return: nothing
 */
void r_monty_and_exe_ins(char *f_name)
{
	FILE *file = fopen(f_name, "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", f_name);
		exit(EXIT_FAILURE);
	}

	char r_line[200];
	unsigned int line_track = 1;

	while (fgets(r_line, sizeof(r_line), file))
	{
		if (r_line[strlen(r_line) - 1] == '\n')
		{
			r_line[strlen(r_line) - 1] = '\0';
		}

		char *token =  strtok(r_line, " ");
		char *opcode = token;

		token = strtok(NULL, " ");
		char *arg = token;

		exe_instruction(opcode, arg, line_number);
		line_number++;
	}

	fclose(file);
}
