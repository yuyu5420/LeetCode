#define max(a, b)  ((a>b) ? a:b)

int expand(char *s, int left, int right){
    while (left >= 0 && right < strlen(s) && s[left] == s[right]){
        left--;
        right++;
    }
    return right-left-1;
}

char * longestPalindrome(char * s){
    if (strlen(s) == 1) return s;
    int start = 0, end = 0, length;

    for (int i = 0; i < strlen(s); i++){
        length = max(expand(s, i, i), expand(s,i, i+1));
        if (length > (end-start+1)){
            if (length % 2){ // odd
                start = i - length/2;       
            }   
            else{ // even
                start = i - length/2 + 1;
            }
            end = i + length/2;
        }
    }
    char *ans = malloc((end-start+2)*sizeof(char));
    strncpy(ans, s+start, end-start+1);
    ans[end-start+1] = '\0';

    return ans;
    
}