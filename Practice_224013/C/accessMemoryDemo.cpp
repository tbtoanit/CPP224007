/*
 * Mỗi dữ liệu sẽ được dedicate vào 1 vùng nhớ trong "bộ nhớ trong"
 * Để truy xuất vùng nhớ hay địa chỉ bộ nhớ dùng cú pháp "&ten_bien"
 */

#include <stdio.h>

int main() {
    int x = 10;
	int y = 20;
    int *p = &x; //biến p được gọi là pointer/cursor/con trỏ

    printf("%p", p);

    printf("Change something here");
<<<<<<< HEAD
    printf("HuynhCuNhan");
=======
	printf("done");
<<<<<<< HEAD
>>>>>>> 35952405043ee42ddd1a164944088e1fd18a0722

printf("done");
printf("done");printf("done");


=======
    printf("hello");
>>>>>>> ba22c9f54813e70f8ea61735e43736703b1d1356
}
