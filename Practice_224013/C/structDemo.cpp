#include <cstring>
#include <stdio.h>

//tạo ra cấu trúc dữ liệu struct employee
struct employee {
    int empId;
<<<<<<< HEAD
    char empName[100]; // change the salary by requirement #1234
=======
    char empName[200]; // change the salary by requirement #1234
>>>>>>> 595011e99dbe54e31e5109730846592825dde4ac
    int salary;
};

int main() {
    employee e1; // tạo ra biến e1 từ cấu trúc dữ liệu đã định nghĩa

    // gán dữ liệu cho biến
    e1.empId = 1001;
    strcpy(e1.empName, "Tom"); // gán một chuỗi cho e1.name thông qua strcpy function
    e1.salary = 20000000; // change the salary by requirement #1234

    printf("%d", e1.empId);


    employee e2; // tạo ra biến e1 từ cấu trúc dữ liệu đã định nghĩa

    // gán dữ liệu cho biến
    e2.empId = 1001;
    strcpy(e2.empName, "Tom"); // gán một chuỗi cho e1.name thông qua strcpy function
    e2.salary = 20000000; // change the salary by requirement #1234

    printf("%d", e2.empId);

}