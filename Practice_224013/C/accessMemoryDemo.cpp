/*
 * Mỗi dữ liệu sẽ được dedicate vào 1 vùng nhớ trong "bộ nhớ trong"
 * Để truy xuất vùng nhớ hay địa chỉ bộ nhớ dùng cú pháp "&ten_bien"
 */

#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x; //biến p được gọi là pointer/cursor/con trỏ

    printf("%p", p);

    printf("Change something here");
}
