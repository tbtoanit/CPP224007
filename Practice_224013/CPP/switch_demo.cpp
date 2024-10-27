#include <iostream>
using namespace std;

int main() {
    int option;
    cout << "Please enter your choice: 1,2,3,4,5 ";
    cin >> option;
    switch (option) {
        case 1:
            cout << "you choose Com Tam";
            break;
        case 2:
            cout << "you choose Pho Bo";
            break;
        case 3:
            cout << "you choose Bun Bo";
            break;
        case 4:
            cout << "you choose Com Chien Hai San";
            break;
        case 5:
            cout << "you choose Bo Xao Sa Te";
            break;
        default:
            cout << "Otherwise" ;
    }
}
