

int maxSubArray(int* nums, int numsSize){
    int ans = nums[0], sum = 0;
    for (int i = 0; i < numsSize; i++){
        sum += nums[i];
        if (ans < sum)  ans = sum;
        if (sum < 0)   sum = 0;
    }
    return ans;
}