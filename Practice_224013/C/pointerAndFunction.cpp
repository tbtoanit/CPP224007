#include <stdio.h>

void increaseValue(int *n) {
    (*n)++; // tăng giá trị tại địa chỉ đó
}

int main() {
    int x = 0;

    increaseValue(&x);

    printf("%d", x);
}