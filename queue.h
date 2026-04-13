#ifndef QUEUE_H
#define QUEUE_H
#include <stddef.h>
#include <stdbool.h>
typedef struct
{
    int *data;
    size_t head, tail, size, cap;
} Queue;
bool queue_init(Queue *q, size_t cap);
void queue_free(Queue *q);
bool enqueue(Queue *q, int x);
bool dequeue(Queue *q, int *out);
bool queue_front(const Queue *q, int *out);
bool queue_empty(const Queue *q);
size_t queue_size(const Queue *q);
#endif