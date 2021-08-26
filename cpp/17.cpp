class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(!digits.length())    return {};
        vector<string> ans, tmp;
        map<char,string> m ={{'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};
        for (auto c: digits){
            tmp.push_back(m[c]);
        }
        combine(ans, tmp, "", digits.length());
        return ans;
    }
    void combine(vector<string>& ans, vector<string>& tmp, string s, int n){
        if(n == s.length()){
            ans.push_back(s);
            return;
        }
        for (auto c: tmp[s.length()]){
            combine(ans, tmp, s+c, n);
        }
    }
};