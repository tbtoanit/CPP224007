/*
 * stringArray = {"banana", "orange", "longan", "mango"}
 * tạo hàm trả về chuỗi dài nhất trong mảng
 */
#include <iostream>
#include <ctype.h>
using namespace std;

string longestString(string stringArray[]) {
    int l = sizeof(stringArray) / sizeof(stringArray[0]);
    string maxString = stringArray[0];
    for (int i = 0; i < l; i++) {
        if(stringArray[i].length() > maxString.length()) {
            maxString = stringArray[i];
        }
    }
    return maxString;
}

int main() {
    string stringArray[] = {"banana", "orange", "longan", "mango"};
    cout << longestString(stringArray);
}
