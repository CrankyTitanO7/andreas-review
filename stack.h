// stack.h

#ifndef STACK_H
#define STACK_H
#include <stddef.h>
#include <stdbool.h>

typedef struct
{
    int *data;
    size_t top; // next free slot (size)
    size_t cap;
} Stack;

bool stack_init(Stack *s, size_t cap);
void stack_free(Stack *s);
bool stack_push(Stack *s, int x);
bool stack_pop(Stack *s, int *out);
bool stack_peek(const Stack *s, int *out);
bool stack_empty(const Stack *s);
size_t stack_size(const Stack *s);
#endif