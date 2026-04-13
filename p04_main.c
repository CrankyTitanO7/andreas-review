// p04_main.c
#include <stdio.h>
#include "p04_student.c" // direct include for this practice set
int main(void)
{
    TwoStackQueue q;
    tsq_init(&q, 1000);
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int x;
        scanf("%d", &x);
        tsq_enqueue(&q, x);
    }
    int v;
    while (tsq_dequeue(&q, &v))
        printf("%d ", v);
    puts("");
    tsq_free(&q);
    return 0;
}