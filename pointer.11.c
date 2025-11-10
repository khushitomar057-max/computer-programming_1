#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *start = arr;
    int *end = arr + 4;

    printf("Array in reverse order: ");
    while (end >= start) {
        printf("%d ", *end);
        end--;
    }
    return 0;
}
