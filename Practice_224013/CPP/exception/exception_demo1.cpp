#include <iostream>
using namespace std;

// Định nghĩa ra class exception
class DivisionByZeroException : public exception {
    const char *what() const noexcept override {
        return "Lỗi chia cho 0!";
    }
};

class IndexOutOfRangeException : public exception {
    const char *what() const noexcept override {
        return "Lỗi Index Out Of The Range";
    }
};

void accessEllement() {
    int arr[4] = {1, 2, 3, 4};
    int indexArr;
    cout << "Nhập index: ";
    cin >> indexArr;
    if (indexArr > 3) {
        throw IndexOutOfRangeException(); // dừng chương trình
    }
    cout << arr[indexArr] << endl;
}

void divideNumbers() {
    int soBiChia = 10;
    int soChia;
    cout << "Nhập số chia: ";
    cin >> soChia;
    // sử dụng class định nghĩa để ném exception
    if(soChia == 0) {
        throw DivisionByZeroException(); // dừng chương trình và ném lỗi
    }
    cout << soBiChia/soChia << endl;
    cout << "Chia Thành công" << endl;
}

int main() {
    // it's me
    // accessEllement();
    // developer 2 (exception => by pass => thực hiện tiếp)
    try {
        divideNumbers();
    }catch (DivisionByZeroException) { // catch đúng exception
        cout << "By pass exception thành công cho phép chia" << endl;
    }

    try {
        accessEllement(); // sẽ vào khối catch nếu hàm ném/throw exception
    }catch (IndexOutOfRangeException) { // catch đúng exception
        cout << "By pass exception thành công cho index" << endl;
    }

    cout << "Continue" << endl;
}


/*
// <ctrl + />
// (command + /)

int main() {
    int soBiChia = 10;
    int soChia;
    cout << "Nhập số chia: ";
    cin >> soChia;

    // sử dụng class định nghĩa để ném exception
    if(soChia == 0) {
        throw DivisionByZeroException(); // dừng chương trình và ném lỗi
    }

    cout << soBiChia/soChia << endl;
    cout << "Chia Thành công" << endl;
}
*/
