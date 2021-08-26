class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        int leng = nums1.size();
        if (leng % 2)   ans = nums1[leng/2];
        else    ans = (nums1[leng/2-1] + nums1[leng/2]) / 2.0;
        return ans;
    }
};