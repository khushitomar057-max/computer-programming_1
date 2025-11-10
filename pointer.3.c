#include <stdio.h>
int main() {
    int num = 25;
    int *ptr = &num;

    printf("Address stored in pointer: %p\n", ptr);
    printf("Value at that address: %d\n", *ptr);
    return 0;
}
