class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty())  return 0;
        int ans = 0, i = 0;
        map<char,int> m;
        for (int j = 0; j < s.length() ; j++){
            if (m.find(s[j]) != m.end())   i = max(m[s[j]], i);
            ans = max(ans, j-i+1);
            m[s[j]] = j+1;
        }
        return ans;
    }
};