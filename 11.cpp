class Solution {
public:
    int maxArea(vector<int>& height) {
        int j = 0, ans = 0, tmp;
        for (int i = height.size()-1; i > 0; i--){
            tmp = min(height[j], height[i+j]);
            ans = max(ans, tmp*i);
            if(tmp == height[j])     j++;
        }
        return ans;
    }
};