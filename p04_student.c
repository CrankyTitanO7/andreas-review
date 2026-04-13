// p04_student.c
#include "stack.h"
#include <stdbool.h>
#include <stddef.h>
typedef struct
{
    Stack in, out; // You may assume each Stack was initialized with some capacity
} TwoStackQueue;
bool tsq_init(TwoStackQueue *q, size_t cap)
{
    // TODO: initialize both internal stacks with given capacity.
    return false;
}
void tsq_free(TwoStackQueue *q)
{
    // TODO: free any resources owned by q.
}
bool tsq_enqueue(TwoStackQueue *q, int x)
{
    // TODO: enqueue x in amortized O(1) time.
    return false;
}
bool tsq_dequeue(TwoStackQueue *q, int *out)
{
    // TODO: dequeue front element into *out in amortized O(1).
    return false;
}
bool tsq_front(TwoStackQueue *q, int *out)
{
    // TODO: write the current front element to *out without removing it.
    return false;
}