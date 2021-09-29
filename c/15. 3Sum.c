
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

int compare(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){
    int **ans = NULL;
    *returnColumnSizes = NULL;
    (*returnSize) = 0;
    if (numsSize < 3)    return ans;
    
    int basicSize = 8;
    ans = malloc(sizeof(int *) * basicSize);
    *returnColumnSizes = malloc(sizeof(int) * basicSize);
    qsort(nums, numsSize, sizeof(int), compare);
    int left, right;
    for (int i = 0; i < numsSize-2; i++){
        left = i+1;
        right = numsSize-1;
        while (left < right){
           
            if (nums[i] + nums[left] + nums[right] > 0){
                right--;
            }
            else if (nums[i] + nums[left] + nums[right] < 0){
                left++;
            }
            else{
                (*returnSize) += 1;
                (*returnColumnSizes)[(*returnSize)-1] = 3;
                ans[(*returnSize)-1] = malloc(3*sizeof(int));
                ans[(*returnSize)-1][0] = nums[i];
                ans[(*returnSize)-1][1] = nums[left];
                ans[(*returnSize)-1][2] = nums[right];
                if ((*returnSize) == basicSize) {
                    basicSize *= 2;
                    ans = realloc(ans, sizeof(int *) * basicSize);
                    (*returnColumnSizes) = realloc((*returnColumnSizes),sizeof(int) * basicSize);
				}
                while (left+1 < numsSize && nums[left] == nums[left+1]) left++;
                left++;
                while (right-1 > left && nums[right] == nums[right-1]) right--;
                right--;
            }
        }
        while (i+1 < numsSize-2 && nums[i] == nums[i+1]) i++;
    }
    
    return ans;
}