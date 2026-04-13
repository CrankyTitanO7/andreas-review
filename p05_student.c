// p05_student.c

#include <stdbool.h>
#include <stddef.h>
typedef struct
{
    int *data;
    size_t head, tail, cap; // We will keep one slack cell
} CQueue;
bool cq_init(CQueue *q, size_t cap)
{
    // TODO: allocate an array of size cap, set head/tail to 0.
    return false;
}
void cq_free(CQueue *q)
{
    // TODO: free memory and reset fields.
}
bool cq_empty(const CQueue *q)
{
    // TODO: return whether queue is empty.
    return false;
}
bool cq_full(const CQueue *q)
{
    // TODO: return whether queue is full using the slack cell rule.
    return false;
}
bool cq_enqueue(CQueue *q, int x)
{
    // TODO: insert x at tail if not full.
    return false;
}
bool cq_dequeue(CQueue *q, int *out)
{
    // TODO: remove from head if not empty, write into *out.
    return false;
}