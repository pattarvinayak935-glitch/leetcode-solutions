#include <stdio.h>

int search(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) return mid;
        if (nums[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int nums1[] = {-1, 0, 3, 5, 9, 12};
    printf("Test 1 (Typical): %d\n", search(nums1, 6, 9));  // Expected: 4
    printf("Test 2 (Edge - Not Found): %d\n", search(nums1, 6, 2));  // Expected: -1
    return 0;
}