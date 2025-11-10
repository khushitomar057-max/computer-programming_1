#include <stdio.h>
int main() {
    char *arr[] = {"One", "Two", "Three", "Four"};
    char **ptr = arr;

    printf("Third string: %s\n", *(ptr + 2));
    return 0;
}
