#include <stdio.h>
int main() {
    int x = 42;
    int *p = &x;
    int **pp = &p;

    printf("Value using double dereferencing: %d\n", **pp);
    return 0;
}
