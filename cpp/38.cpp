class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) return "1";
        string s = "1", s1;
        char old;
        int num;
        for (int i = 0; i < n-1; i++){
            old = 'o';
            num = 1;
            s1 = "";
            for (auto c:s){
                if (old == c){
                    num++;
                }
                else{
                    if(old != 'o'){
                        s1 += to_string(num)+old;
                        num = 1;
                    } 
                }
                old = c;
            }
            s1 += to_string(num)+old;
            s = s1;
        }
        return s;
    }
};