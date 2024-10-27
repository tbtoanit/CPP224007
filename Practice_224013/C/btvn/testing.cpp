#include <stdio.h>

int main() {
    char arr[4][6] = {
        {'a', '1', 'c', 'd', 'e', 'f'},
        {'b', 'b', 'c', 'd'},
        {'c', 'b', 'c', 'd', 'e', 'f'},
        {'d', 'b'}
    };

    int len = sizeof(arr[1]) / sizeof(arr[1][0]);
    printf("%d", len);
}