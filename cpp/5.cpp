class Solution {
public:
    string longestPalindrome(string s) {
        if (s.length() == 1)    return s;
        int l = 1, ans_l;
        string ans;
        bool check;
        for (int i = 0; i <= s.length(); i++){
            check = false;
            while (i-l >= 0 && i+l < s.length()){
                if (s[i-l] == s[i+l])  {
                    check = true;
                    ans_l = l;
                } 
                else break;
                l++;
            }
            if(check)    ans = s.substr(i-ans_l,2*ans_l+1);
            while (i-l >= 0 && i+l < s.length()){
                if (s[i-l] == s[i+l])  {
                    check = true;
                    ans_l = l;
                } 
                else break;
                l++;
            }
        }
        return ans;
    }
};