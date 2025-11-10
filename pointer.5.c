#include <stdio.h>
int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int *ptr = arr;

    printf("Third element using pointer: %d\n", *(ptr + 2));
    return 0;
}
