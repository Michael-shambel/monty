#ifndef _MONTY_H_
#define _MONTY_H_
<<<<<<< HEAD

#include <stdio.h>
#include <stdlib.h>
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

>>>>>>> 79a674667c112cd31b6031e9489b2f8acceb03e1
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
extern instruction_t instructions[];

void n_push(stack_t **stack, unsigned int line_track);
void n_pall(stack_t **stack, unsigned int line_track);
void n_pint(stack_t **stack, unsigned int line_number);
void n_pop(stack_t **stack, unsigned int line_number);

#endif
