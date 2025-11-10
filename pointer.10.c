#include <stdio.h>
int main() {
    int src[] = {1, 2, 3, 4, 5};
    int dest[5];
    int *p1 = src, *p2 = dest;
    int i;

    for (i = 0; i < 5; i++)
        *(p2 + i) = *(p1 + i);

    printf("Copied array: ");
    for (i = 0; i < 5; i++)
        printf("%d ", dest[i]);
    return 0;
}
