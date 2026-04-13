// p06_main.c
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <inttypes.h>
void insertion_sort_stats(int *a, size_t n, uint64_t *cmp, uint64_t *moves);
int main(void)
{
    size_t n;
    if (scanf("%zu", &n) != 1)
        return 0;
    int *a = malloc(sizeof(int) * n);
    for (size_t i = 0; i < n; i++)
        scanf("%d", &a[i]);
    uint64_t cmp = 0, moves = 0;
    insertion_sort_stats(a, n, &cmp, &moves);
    for (size_t i = 0; i < n; i++)
        printf("%d%c", a[i], i + 1 == n ? '\n' : ' ');
    printf("comparisons=%" PRIu64 "\n", cmp);
    printf("moves=%" PRIu64 "\n", moves);
    free(a);
    return 0;
}