#include <iostream>
using namespace std;

void stringConcat1() {
    string lastName = "Toan ";
    string firstName = "Tran";
    string fullName = lastName + firstName;
    cout << fullName;
}

void stringConcat2() {
    string lastName = "John "; // biến lastName/object
    string firstName = "Doe";
    string fullName = lastName.append(firstName); //tường minh
    cout << fullName;
}

void stringReplace(){
    string s1 = "0123456789";
    string s2 = "111";

    s1.replace(4,3,s2, 0, 1);
    cout << s1;
}

int main() {
    stringReplace();
}
