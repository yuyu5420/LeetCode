class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<bool> x(301, false);
        for (auto i: nums){
            if (i > 0 && i <= 301){
                x[i-1] = true;
            }
        }
        int ans = 1;
        for (auto b: x){
            if(!b)  break;
            ans++;
        }
        return ans;
    }
};