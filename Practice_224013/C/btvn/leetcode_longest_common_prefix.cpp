#include <stdio.h>

int min(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

int main() {
    char strs[3][6] = {
        {'f', 'l', 'o', 'w', 'e', 'r'},
        {'f', 'l', 'o', 'w'},
        {'f', 'l', 'i', 'g', 'h', 't'}
    };

    // char strs[4][6] = {
    //     {'a', 'b', 'c', 'd', 'e', 'f'},
    //     {'a', 'b', 'c', 'd'},
    //     {'a', 'b', 'c', 'd', 'e', 'f'},
    //     {'a', 'b', 'c'}
    // };

    int countPrefix = 0;
    for (int j = 0; j < 6; j++) {
        // j là tham số vị trí
        int count = 0;
        char previousChar = strs[0][j];
        for (int i = 0; i < 3; i++) {
            if (strs[i][j] == previousChar) {
                count++;
            }
        }
        if (count == 3) {
            printf("%c", strs[0][j]);
            countPrefix++;
        } else {
            if (countPrefix == 0) {
                printf("%s", "No Prefix");
            }
            break;
        }
    }
}
