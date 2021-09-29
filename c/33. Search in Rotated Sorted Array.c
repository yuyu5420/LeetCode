

int search(int* nums, int numsSize, int target){
    if (numsSize == 1){
        if (nums[0] == target)  return 0;
        else    return -1;
    }
    int left = 0, right = numsSize-1, mid;
    while (left <= right){
        mid = (left + right) / 2;
        if (nums[mid] == target)    return mid;
        if (nums[mid] < nums[right]){
            if (target > nums[mid] && target <= nums[right]){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        else{
            if (target >= nums[left] && target < nums[mid]){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
    }
    return -1;
}