// p05_main.c
#include <stdio.h>
#include "p05_student.c"
int main(void)
{
    CQueue q;
    cq_init(&q, 16);
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        cq_enqueue(&q, x);
    }
    int v;
    while (cq_dequeue(&q, &v))
    {
        printf("%d%c", v, cq_empty(&q) ?'\n' :' ');
    }
    cq_free(&q);
    return 0;
}