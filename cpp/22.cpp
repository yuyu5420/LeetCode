class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        recursive(ans, "", n, n);
        return ans;
    }
    void recursive(vector<string>& ans, string s, int l, int r){
            if(!l && !r){
                ans.push_back(s);
                return;
            }    
            if (l){
                recursive(ans, s+"(", l-1, r);
            }
            if(l < r){
                recursive(ans, s+")", l, r-1);
            }
    }
};