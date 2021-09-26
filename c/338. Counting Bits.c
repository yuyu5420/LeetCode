

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize){
    *returnSize = n+1;
    int *ans = malloc((*returnSize) * sizeof(int));
    ans[0] = 0;
    if (n>0)    ans[1] = 1;
    for (int i = 2; i <= n; i++){
        ans[i] = ans[i/2] + (i%2);
    }

    return ans;
}