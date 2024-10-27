/*
 * Cho 1 chuỗi dữ liệu gồm các số và chữ ví dụ: s = "12abcd456ef".
 * Hãy in ra một chuỗi dữ liệu chỉ có chứa số, không có chứa kí tự. Chuỗi dữ liệu mới có thể là s hoă s1
 */
#include <iostream>
#include <ctype.h>
using namespace std;

string removeDigit() {
    string s = "12444abcd44456ef";
    string newString = "";
    int l = s.length();
    //logic
    for (int i = 0; i < l; i++) {
        if (isdigit(s[i])) {
            newString = newString + s[i];
        }
    }

    return newString;
}

int main() {
    cout << removeDigit();
}
