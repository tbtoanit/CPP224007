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
        return (diemToan + diemNgoaiNgu) / 2;
    }
};

class Classes {
public:
    string classesID;
    string classesName;

    Student listStudent[4];

    // viết hàm xuất thông tin lớp học (mã lớp, tên lớp, và các học viên)
    void printClasses() {
        cout << "Classes ID : " << classesID << endl;
        cout << "Classes Name : " << classesName << endl;
        for (int i = 0; i < 4; i++) {
            listStudent[i].printInfo();
        }
    }

    // btvn1: viết hàm tìm thông tin học sinh trong 1 lớp học bởi mã học sinh
};

float tinhDiemTrungBinh(Classes myClass) {
    float ketQuaDTB = 0;
    // Điểm trung bình của lớp => điểm trung bình của các học viên
    float tongDiemLopHoc = 0;
    for(int i =0; i< 4; i++) {
        Student s = myClass.listStudent[i];
        float diemTrungBinh = (s.diemToan + s.diemNgoaiNgu)/2;
        tongDiemLopHoc = diemTrungBinh + tongDiemLopHoc;
    }
    ketQuaDTB = tongDiemLopHoc/4;

    return ketQuaDTB;
}

// btvn2: viết hàm so sánh 2 lớp học
void compareCapacityClasses(Classes a1, Classes a2) {
    if (tinhDiemTrungBinh(a1) > tinhDiemTrungBinh(a2)) {
        cout << "Diem trung binh lop a1 > a2" << endl;
    }else if(tinhDiemTrungBinh(a2) > tinhDiemTrungBinh(a1)) {
        cout << "Diem trung binh lop a2 > a1" << endl;
    }else {
        cout << "Diem trung binh lop như nhau" << endl;
    }
}


int main() {
    // khởi tạo và gán thông tin của student
    Student student1(1, "NVA", "a@gmail.com", 6.5, 7.6);
    Student student2(2, "NVB", "b@gmail.com", 7.5, 7.6);
    Student student3(3, "NVC", "c@gmail.com", 5.5, 8.6);
    Student student4(4, "NVD", "d@gmail.com", 9.5, 7.6);

    // khởi tạo và gán thông tin cho lớp
    Classes c1;
    c1.classesID = "CLASSES001";
    c1.classesName = "Lớp Chuyên Toán 12A1";
    c1.listStudent[0] = student1;
    c1.listStudent[1] = student2;
    c1.listStudent[2] = student3;
    c1.listStudent[3] = student4;

    // tạo thông tin cho lớp c2
    // khởi tạo và gán thông tin của student
    Student student5(1, "NVA", "a@gmail.com", 8.5, 7.6);
    Student student6(2, "NVB", "b@gmail.com", 7.5, 7.6);
    Student student7(3, "NVC", "c@gmail.com", 5.5, 8.6);
    Student student8(4, "NVD", "d@gmail.com", 9.5, 7.6);

    // khởi tạo và gán thông tin cho lớp
    Classes c2;
    c2.classesID = "CLASSES002";
    c2.classesName = "Lớp Chuyên Anh 12A2";
    c2.listStudent[0] = student5;
    c2.listStudent[1] = student6;
    c2.listStudent[2] = student7;
    c2.listStudent[3] = student8;

    compareCapacityClasses(c1, c2);

}
