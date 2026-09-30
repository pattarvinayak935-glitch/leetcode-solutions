#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return result;
}

int main() {
    int nums1[] = {2, 7, 11, 15};
    int returnSize1;
    int* res1 = twoSum(nums1, 4, 9, &returnSize1);
    printf("Test 1 (Typical): [%d, %d]\n", res1[0], res1[1]); // Expected: [0, 1]
    free(res1);

    int nums2[] = {3, 3};
    int returnSize2;
    int* res2 = twoSum(nums2, 2, 6, &returnSize2);
    printf("Test 2 (Edge - Duplicates): [%d, %d]\n", res2[0], res2[1]); // Expected: [0, 1]
    free(res2);
    return 0;
}