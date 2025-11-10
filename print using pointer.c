#include <stdio.h>
int main() {
    int x = 10;
    int *ptr = &x;

    printf("Value of x using pointer: %d\n", *ptr);
    return 0;
}
