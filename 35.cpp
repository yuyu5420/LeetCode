class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        /*int l = 0, r = nums.size()-1, p = (l+r)/2;
        while(1){
            if (nums[p] >= target){
                r = p;
            }
            else if (nums[p] < target){
                l = p;
            }
            p = (l+r)/2;
            if (r-l <= 1){
                if (nums[l] < target && nums[r] >= target) return r;
                else if (nums[r] < target)  return r+1;
                else if (nums[l] > target)  return l;
                if(!p)  return 0;
            }
        }*/
    }
};