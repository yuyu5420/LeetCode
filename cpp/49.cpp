class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> m;
        string s1;
        for (auto s: strs){
            s1 = s;
            sort(s1.begin(), s1.end());
            m[s1].push_back(s);
        }
        for (auto [k, v]: m){
            ans.push_back(v);
        }
        return ans;
    }
};