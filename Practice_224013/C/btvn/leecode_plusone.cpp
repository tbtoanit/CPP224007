#include <stdio.h>
#include <cmath>

int main() {
    int digits[] = {1, 2, 3, 4};
    int len = sizeof(digits) / sizeof(int); // tính số lượng phần tử trong digits
    int k = pow(10, (len - 1)); // luỹ thừa của k
    int d = 0;
    for (int i = 0; i <= 3; i++) {
        d = d + (k * digits[i]); // 1000 + 200 + 30 + 4
        k = k / 10;
    }

    int d1 = d + 1; //d1 = 1235

    int len1 = 0;
    if (digits[len - 1] == 9) {
        //nếu phần tử cuối cùng của digits là 9
        len1 = len + 1;
    } else {
        len1 = len;
    }

    int digits1[len1];
    int d2 = d1;
    k = pow(10, (len1 - 1)); // reset lại giá trị k để tái sử dụng cho digits1
    for (int i = 0; i <= len1 - 1; i++) {
        int phanNguyen = (int) d2 / k;
        digits1[i] = phanNguyen;
        d2 = d2 % k; //235
        k = k / 10;
    }
}
