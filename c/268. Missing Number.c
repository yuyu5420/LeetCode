

int missingNumber(int* nums, int numsSize){
    int ans = 0;
    for (int i = 0; i < numsSize; i++){
        ans ^= i;
        ans ^= nums[i];
    }
    ans ^= numsSize;
    return ans;
}