// p02_main.c
#include <stdio.h>
#include "p02_student.c" // for this practice set we include directly
int main(void)
{
    MinStack *S;
    ms_init(&S, 1000);
    int n, x;
    if (scanf("%d", &n) != 1)
        return 0;
    while (n--)
    {
        scanf("%d", &x);
        ms_push(S, x);
    }
    int m;
    if (ms_min(S, &m))
        printf("%d\n", m);
    ms_free(S);
    return 0;
}