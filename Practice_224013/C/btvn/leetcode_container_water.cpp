#include <stdio.h>

int min(int a, int b) {
    if(a < b) {
        return a;
    }
    return b;
}

int max(int a, int b) {
    if(a > b) {
        return a;
    }
    return b;
}

int main() {
    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int lenHeight = sizeof(height) / sizeof(height[0]);
    int maxArea = min(height[0], height[1])*(1-0);

    for (int i = 0; i < lenHeight; i++) {
        for (int j = i + 1; j < lenHeight; j++) {
            int area = min(height[i], height[j])*(j-i);
            maxArea = max(area, maxArea);
        }
    }

    printf("%d", maxArea);
}
