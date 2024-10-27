#include <stdio.h>

int main() {
    char s[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', ' ', ' '};
    int count = 0;
    int flag_first_space = 1;

    int len = sizeof(s) / sizeof(char); //11
    for (int i = len - 1; i >= 0; i--) {
        if (s[i] != ' ') {
            count++;
            flag_first_space = -1;
        } else {
            if (flag_first_space == 1) {
                continue;
            } else {
                break;
            }
        }
    }
    printf("%d", count);
}
