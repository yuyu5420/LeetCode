

bool check(char c){
    if ((c >= 'a' && c <= 'z')  ||  (c >= 'A' && c <= 'Z') || c >= '0' && c <= '9')    return true;
    return false;
}

char toLowerCase(char c){
    if (c >= 'A' && c <= 'Z'){
        c = c + 32;
    }
    return c;
}
bool isPalindrome(char * s){
    int length = strlen(s);
    if (length == 1) return true;
    int i = 0, j = length-1;
    while (i < j){
        while (!check(s[i]) && i < length-1){
            i++;
        }
        while (!check(s[j]) && j > 0){
            j--;
        }
        if (i == length-1 || j == 0)   return true;
        if (toLowerCase(s[i]) != toLowerCase(s[j])) return false;
        i++;
        j--;
    }
    return true;
}