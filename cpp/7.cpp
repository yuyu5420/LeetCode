class Solution {
public:
    int reverse(int x) {
        int tmp, ans, i = 0; 
        string s = to_string(x);
        int l = s.length();
        for (i = 0; i < l/2; i++){
            tmp = s[i];
            s[i] = s[l-1-i];
            s[l-1-i] = tmp;
        }
        try {
            ans = stoi(s);
        }
        catch (...){
            return 0;
        }
        if(s.back() == '-') return -ans;
        else return ans;
    }
};