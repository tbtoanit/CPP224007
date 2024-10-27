#include <stdio.h>

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int remark = 0; // phương pháp đặt cờ/flag, đánh dấu

    // int len = sizeof(nums) / sizeof(int);

    for (int i = 0; i < 4; i++) {
        if(remark != 0){break;} // remark đã thay đổi => đã tìm được i, j
        for (int j = i + 1; j < 4; j++) {
            if (target == nums[i] + nums[j]) {
                remark++;
                printf("[%d , %d]", i, j);
                break;
            }
        }
    }
}
