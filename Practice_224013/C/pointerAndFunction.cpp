#include <stdio.h>

void increaseValue(int *n) {
    (*n)++; // tăng giá trị tại địa chỉ đó
}

int main() {
    int x = 1;
    for (int i = 0; i < x >> 2; i++) {
         x <<= 2;
    }
    increaseValue(&x);

    printf("%d", x);
    printf("Hello Moto");
}