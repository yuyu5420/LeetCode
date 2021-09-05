
#define max(a, b) ((a>b)?a:b)
#define min(a, b) ((a<b)?a:b)

int lengthOfLongestSubstring(char * s){
    if (!strlen(s))  return 0;
    int ans = 0, tmp;
    char *pch;
    for (int i = 0; i < strlen(s); i++){
        if (ans >= strlen(s)-i) break;
        pch = strchr(s+i+1, s[i]);
        if (pch)    tmp = pch-s-i;
        else tmp = strlen(s) - i;
        if (ans >= tmp) continue;
        for (int j = i+1; j < i + tmp; j++){
            pch = strchr(s+j+1, s[j]);
            if (pch)    tmp = min(tmp, pch-s-i);
        }
        ans = max(ans, tmp);
    }
    return ans;
}