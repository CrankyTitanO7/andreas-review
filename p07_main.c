// p07_main.c
#include <stdio.h>
#include <stdlib.h>
#include "ll.h"
#include <stdbool.h> // <-- added by Jaden 
bool ll_insert_at(Node **, size_t, int);
int main(void)
{
    size_t n;
    if (scanf("%zu", &n) != 1)
        return 0;
    int *a = malloc(sizeof(int) * n);
    for (size_t i = 0; i < n; i++)
        scanf("%d", &a[i]);
    Node *head = ll_from_array(a, n);
    free(a);
    size_t pos;
    int val;
    if (scanf("%zu%d", &pos, &val) != 2)
        return 0;
    if (!ll_insert_at(&head, pos, val))
    {
        puts("ERROR");
        ll_free(head);
        return 0;
    }
    ll_print(head);
    ll_free(head);
    return 0;
}