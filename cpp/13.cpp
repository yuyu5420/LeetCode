class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        map<char, int> m = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        for (int i = 0; i < s.length(); i++){
            if ( i!= 0 && m[s[i-1]] < m[s[i]])  {
                ans += m[s[i]] - 2*m[s[i-1]];
            }
            else    ans += m[s[i]];
        }
        return ans;
    }
};