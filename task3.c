int* transformArray(int* nums, int numsSize, int* returnSize) {
    int* result = malloc(numsSize * sizeof(int));
    *returnSize = numsSize;
    int zeros = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 == 0) {
            zeros++;
        }
    }
    for (int i = 0; i < zeros; i++) {
        result[i] = 0;
    }
    for (int i = zeros; i < numsSize; i++) {
        result[i] = 1;
    }
    return result;
}
