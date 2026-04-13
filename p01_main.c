// p01_main.c
#include <stdio.h>
#include <stdlib.h>
void next_greater(const int *, size_t, int *);
int main(void)
{
    size_t n;
    if (scanf("%zu", &n) != 1)
        return 0;
    int *a = malloc(sizeof(int) * n), *out = malloc(sizeof(int) * n);
    for (size_t i = 0; i < n; i++)
        scanf("%d", &a[i]);
    next_greater(a, n, out);
    for (size_t i = 0; i < n; i++)
        printf("%d\n", out[i]);
    free(a);
    free(out);
    return 0;
}
