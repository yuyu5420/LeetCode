class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())    return "";
        else if (strs.size() == 1) return strs[0];
        int max_l = INT_MAX;
        for (int i = 0; i < strs.size(); i++){
            max_l = min(max_l, int(strs[i].length()));
        }
        if(!max_l)  return "";
        int length = 0;
        while (length < max_l && strs[0].length() >= length+1 && strs[1].length() >= length+1 && strs[0].substr(0, length+1) == strs[1].substr(0, length+1))    length++;                
        for (int i = 2; i < strs.size(); i++){
            while (strs[i].length() >= length && strs[0].substr(0, length) != strs[i].substr(0, length)){
                length--;       
                if (!length)    return "";
            }
        }
        return strs[0].substr(0, length);
    }
};