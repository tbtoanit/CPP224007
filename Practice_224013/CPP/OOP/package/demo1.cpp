#include <iostream>
using namespace std;

class Employee{
// public:
private:
    string employeeID = "E000";
    string name = "Blank";
    int age = 18;
    int salary = 5000000;

public:
    void work() {
        cout << "work" << endl;
    }

    string getEmployeeID() {
        // write logic to insert DB for counting
        return employeeID;
    }
    void setEmployeeID(string id) {
       employeeID = id;
    }
};

int main() {
    Employee e1;
    //e1.employeeID = "E001"; // cannot access private attribute from outside
    // cout << e1.employeeID << endl;
    e1.setEmployeeID("E001");
    cout << e1.getEmployeeID() << endl; // able to access public method from outsid
}
