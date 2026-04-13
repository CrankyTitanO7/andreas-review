// p03_main.c
#include <stdio.h>
#include "queue.h"
void reverse_first_k(Queue *, size_t);
int main(void)
{
    size_t n, k;
    if (scanf("%zu%zu", &n, &k) != 2)
        return 0;
    Queue q;
    queue_init(&q, n + 5);
    for (size_t i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        enqueue(&q, x);
    }
    reverse_first_k(&q, k);
    int v;
    while (dequeue(&q, &v))
        printf("%d%c", v, queue_size(&q) ?’ ’:’\n’);
    queue_free(&q);
    return 0;
}