#include <stdio.h>
int main() {
    int arr[] = {10, 20};
    int *p1 = &arr[0];
    int *p2 = &arr[1];

    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;

    printf("After swap: %d %d\n", arr[0], arr[1]);
    return 0;
}
