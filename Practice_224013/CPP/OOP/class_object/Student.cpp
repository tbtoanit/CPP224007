#include <iostream>
using namespace std;

class Student {
public:
    int studentID; // attribute, property
    string studentName;
    string email;
    float diemToan;
    float diemNgoaiNgu;

    // hàm tạo được gọi đến tại thời điểm tạo ra đối tượng
    Student() {
        cout << "Đối tượng được tạo ra bởi hàm tạo default\n";
    }

    // hàm tạo có tham số
    Student(int ma, string ten, string eml, float dt, float dnn) {
        cout << "Đối tượng được tạo ra bởi hàm tạo có tham số\n";
        studentID = ma;
        studentName = ten;
        email = eml;
        diemToan = dt;
        diemNgoaiNgu = dnn;
    }

    // phương thức, hàm bên trong 1 class
    void printInfo() {
        cout << "Đây là thông tin của một học sinh: \n";
        cout << studentID << "--" << studentName << "--" << email << "--" << diemToan << "--" << diemNgoaiNgu << "\n";
    }

    // viết 1 phương thức tính điểm trung bình của học viên và trả về điê
    float averageScore() {
        return (diemToan + diemNgoaiNgu) /2;
    }

};


int main() {
    Student student1; // student1 => object
    // assign data to object
    student1.studentID = 1;
    student1.studentName = "Nguyen Van A";
    student1.email = "a@gmail.com";
    student1.diemToan = 7.5;
    student1.diemNgoaiNgu = 9.5;

    // access data with attribute
    student1.printInfo();// access method by object
    cout << "Diem trung binh là: " << student1.averageScore();

    Student student2(2, "NVB", "b@gmail.com", 6.5, 7.6);
    student2.printInfo();
}
