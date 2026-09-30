#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int insertPos = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[insertPos++] = nums[i];
        }
    }
    while (insertPos < numsSize) {
        nums[insertPos++] = 0;
    }
}

int main() {
    int nums1[] = {0, 1, 0, 3, 12};
    moveZeroes(nums1, 5);
    printf("Test 1 (Typical): ");
    for (int i = 0; i < 5; i++) printf("%d ", nums1[i]); // Expected: 1 3 12 0 0
    printf("\n");

    int nums2[] = {0};
    moveZeroes(nums2, 1);
    printf("Test 2 (Edge - Single Zero): ");
    for (int i = 0; i < 1; i++) printf("%d ", nums2[i]); // Expected: 0
    printf("\n");
    return 0;
}