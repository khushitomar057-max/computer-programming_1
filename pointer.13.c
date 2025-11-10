#include <stdio.h>
int main() {
    int val = 99;
    int *p1 = &val;
    int **p2 = &p1;
    int ***p3 = &p2;

    printf("Value using triple dereferencing: %d\n", ***p3);
    return 0;
}
