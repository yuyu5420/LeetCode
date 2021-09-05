#define min(a,b) ((a>b)?b:a)
#define max(a,b) ((a>b)?a:b)

int maxArea(int* height, int heightSize){
    int ans = 0, j = 0, tmp;
    for (int i = heightSize-1; i > 0 ; i--){
        tmp = min(height[j], height[j+i]);
        ans = max(ans, tmp*i);
        if (tmp == height[j])    j++;
    }
    return ans;
}