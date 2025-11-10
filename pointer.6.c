#include <stdio.h>
int main() {
    char str[] = "HELLO";
    char *ptr = str;

    printf("Characters in string: ");
    while (*ptr != '\0') {
        printf("%c ", *ptr);
        ptr++;
    }
    return 0;
}
