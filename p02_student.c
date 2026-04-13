// p02_student.c
#include <stdbool.h>
#include <stddef.h>

// You may define your struct however you like.
typedef struct
{
    // TODO: define your internal fields (arrays, size, etc.)
} MinStack;

bool ms_init(MinStack **S, size_t cap)
{
    // TODO: allocate and initialize a MinStack that can hold up to cap elements.
    return false;
}
void ms_free(MinStack *S)
{
    // TODO: free all memory owned by S.
}
bool ms_push(MinStack *S, int x)
{
    // TODO: push x onto the stack in O(1), updating min info.
    return false;
}
bool ms_pop(MinStack *S, int *out)
{
    // TODO: pop top element into *out (if out != NULL) in O(1).
    return false;
}
bool ms_top(MinStack *S, int *out)
{
    // TODO: write the top element into *out without popping, O(1).
    return false;
}
bool ms_min(MinStack *S, int *out)
{
    // TODO: write the current minimum element into *out, O(1).
    return false;
}