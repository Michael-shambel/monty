#include "monty.h"

instruction_t instructions[] = {
        {"push", &n_push},
        {"pall", &n_pall},
	{"pint", &n_pint},
	{"pop", &n_pop},
        {NULL, NULL}
};
