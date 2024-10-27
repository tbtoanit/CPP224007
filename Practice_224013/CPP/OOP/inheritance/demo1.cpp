#include <iostream>
using namespace std;
// creating a class Animal
class Animal {
public:
//protected: // able to access from CHILD
//private: // access specifier/modifier => unable inheritance
    int numberOfLegs;
    string eyeColor;
};

// creating a class Person
class Person {
public:
    string name;
    int age;
    void eat() {
        cout << "eat" << endl;
    }
};
// class Employee(Child/Derive class) inheritance from Person (Parent/Base class)
class Employee: public Person, public Animal{ // Multiple Inheritance
public:
    string employeeID;
    //string name;
    //int age;
    int salary;
    void work() {
        cout << "work" << endl;
    }

    int getNumberOfLegs(){
      return numberOfLegs;
    }
};

//Multiple Level Inheritance
class MarketingEmployee:public Employee {
public:
    string marketingExperience;

    void marketingSolution() {
        cout << "Digital Marketing" << endl;
    }

};

int main() {
    Employee e1;
    e1.employeeID = "E001";
    // able to use PROPERTIES and METHOD of parent class
    e1.name = "Nguyen Van Tom";
    e1.age = 30;
    e1.numberOfLegs = 2;
    e1.eyeColor = "black";
    e1.eat();

    Person p1;
    p1.name = "Nguyen Van A";
    p1.age = 30;
    //p1.employeeID = "E001"; // unable to use info from CHILD

    // grandChild
    MarketingEmployee mke1;
    mke1.employeeID = "MKE001";
    mke1.name = "";
    mke1.marketingExperience = "With over 10 years of experience";
    mke1.marketingSolution();
}