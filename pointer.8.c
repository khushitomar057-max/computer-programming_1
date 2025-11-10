#include <stdio.h>
int main() {
    int a = 5, b = 5;
    int *p1 = &a, *p2 = &a;

    if (p1 == p2)
        printf("Both pointers point to the same location.\n");
    else
        printf("Pointers point to different locations.\n");
    return 0;
}
