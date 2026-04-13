#include "stack.h"
#include <stdlib.h>
bool stack_init(Stack *s, size_t cap)
{
    s->data = (int *)malloc(sizeof(int) * cap);
    if (!s->data)
    {
        s->cap = s->top = 0;
        return false;
    }
    s->cap = cap;
    s->top = 0;
    return true;
}
void stack_free(Stack *s)
{
    free(s->data);
    s->data = NULL;
    s->cap = s->top = 0;
}
bool stack_push(Stack *s, int x)
{
    if (s->top == s->cap)
        return false;
    s->data[s->top++] = x;
    return true;
}
bool stack_pop(Stack *s, int *out)
{
    if (s->top == 0)
        return false;
    if (out)
        *out = s->data[--s->top];
    else
        --s->top;
    return true;
}
bool stack_peek(const Stack *s, int *out)
{
    if(s->top == 0) return false;
    if (out)
        *out = s->data[s->top - 1];
    return true;
}
bool stack_empty(const Stack *s) { return s->top == 0; }
size_t stack_size(const Stack *s) { return s->top; }