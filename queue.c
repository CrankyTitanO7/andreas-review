#include "queue.h"
#include <stdlib.h>
bool queue_init(Queue *q, size_t cap)
{
    q->data = (int *)malloc(sizeof(int) * cap);
    if (!q->data)
    {
        q->cap = q->size = q->head = q->tail = 0;
        return false;
    }
    q->cap = cap;
    q->size = 0;
    q->head = 0;
    q->tail = 0;
    return true;
}
void queue_free(Queue *q)
{
    free(q->data);
    q->data = NULL;
    q->cap = q->size = q->head = q->tail = 0;
}
bool enqueue(Queue *q, int x)
{
    if (q->size == q->cap)
        return false;
    q->data[q->tail] = x;
    q->tail = (q->tail + 1) % q->cap;
    q->size++;
    return true;
}
bool dequeue(Queue *q, int *out)
{
    if (q->size == 0)
        return false;
    if (out)
        *out = q->data[q->head];
    q->head = (q->head + 1) % q->cap;
    q->size--;
    return true;
}
bool queue_front(const Queue *q, int *out)
{
    if (q->size == 0)
        return false;
    if (out)
        *out = q->data[q->head];
    return true;
}
bool queue_empty(const Queue *q) { return q->size == 0; }
size_t queue_size(const Queue *q) { return q->size; }