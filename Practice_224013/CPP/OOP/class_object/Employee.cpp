/*
 * - Viết một class Employee với employeeID, name, email, Date of birth, salary
 * - Viết 1 hàm in thông tin employee
 * - Viết 1 hàm calculate net salary dựa trên salary biết net salary được trả về là 90% của salary được nhập vào
 * - Viết 1 hàm cho phép nhập thông tin employee, hàm này sẽ nhận vào các thông tin khi gọi qua đối số truyền vào
 */
#include <iostream>
using namespace std;

class Employee {
public:
    int employeeID;
    string name;
    string email;
    string dateOfBirth;
    double salary;

    void printInformation() {
        cout << employeeID << " -- " << name << " -- " << email << " -- " << dateOfBirth << " -- " << salary << endl;
    }

    double netSalary() {
        return (0.9 * salary);
    }

    void addInformation(int ma, string ten, string eml, string dob, double luong) {
        Employee s1;
        employeeID = ma;
        name = ten;
        email = eml;
        dateOfBirth = dob;
        salary = luong;
    }
};



int main() {
    Employee s1;
    s1.addInformation(1, "NVA", "a@gmail", "2022-01-01", 1500);

    cout << "Print information: " << endl;
    s1.printInformation();

    cout << "Net salary: " << s1.netSalary() << endl;
    return 0;
}
