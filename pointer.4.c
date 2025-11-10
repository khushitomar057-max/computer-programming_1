#include <stdio.h>
int main() {
    int a = 10, b = 20;
    int *p1 = &a, *p2 = &b;
    int temp;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
